#include <stdio.h>  
#include <iostream>
#include <unistd.h>/*#包含<unistd.h>*/
#include <stdlib.h>  
#include <errno.h>  
#include <arpa/inet.h>
#include <string.h>  
#include <sys/types.h>  
#include <netinet/in.h>  
#include <sys/socket.h>  
#include <pthread.h>
#include <sys/wait.h>  
#include <string.h>
#include <netdb.h>
#include<sys/time.h>

#include "CommunicationsProtocol.h"
#include "echoEvent.h"

using namespace std;
#define SERVPORT 7392
#define MAXDATASIZE 100    /*每次最大数据传输量 */

struct Args{
	int runCount_;
	int sendCount_;
	int id_;
};

void* Tmain(void* a)
{
	Args* args = (Args*)a;
	char recvBuf[1024];
	timeval gstart,gend;	
	gettimeofday(&gstart, NULL);
	int sock_fd;
    struct sockaddr_in serv_addr;
	for(int i = 0; i < args->runCount_; i++){
        if((sock_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket创建出错！");
        exit(1);
    }
	bzero(&serv_addr,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(SERVPORT);
	serv_addr.sin_addr.s_addr = htons(INADDR_ANY);
    //serv_addr.sin_addr = *((struct in_addr *)host->h_addr);
    bzero(&(serv_addr.sin_zero),8);
    if(connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr)) == -1) {
        perror("connect出错！");
        exit(1);
    }
	
	echoEvent event;
	event.l1.level2Size = sizeof(echoEvent);
	event.l1.jumpCount = 0;
	event.l1.sourceID = args->id_;
	event.l1.targetID = -1;
	event.l1.missCount = 0;
	event.l1.serialNumber = i;
	event.setName("echoEvent");
	memcpy(event.l1.level2Name, "echoEvent", 32);	
	memcpy(event.l1.featureCode, "$#@!", 4);	

	strcpy(event.msg, "Hello,World!");	

	level1 init;
	init.jumpCount = 0;
	init.level2Size = 0;
	init.sourceID = args->id_;
	init.targetID = -1;
	init.serialNumber = 0;
	init.missCount = 0;
	memcpy(init.level2Name, "InitEvent", 32);	
	memcpy(init.featureCode, "$#@!", 4);	

	send(sock_fd, &init, sizeof(level1), 0);
	for(int k = 0; k < args->sendCount_; k++){
		send(sock_fd, &event, sizeof(echoEvent), 0);
		recv(sock_fd, &recvBuf, 1024, 0);
	}
	//memcpy(&event, recvBuf, sizeof(echoEvent));
	//cout << "\t" << i+1 << "\tRecvMsg:" << event.msg << endl;
    close(sock_fd);
	}
	gettimeofday(&gend, NULL);
	double t = (gend.tv_sec*1000+gend.tv_usec/1000 - gstart.tv_sec*1000+gstart.tv_usec/1000);
	cout << args->id_ <<  " : 总共用时 " << t << "ms" 
		 << "\t每个包平均用时:" << (t/args->runCount_)/args->sendCount_ << "ms"  << endl;
	return NULL;
}

int main(int iA, char* pA[])
{
	if(iA < 3){
		cout << "请输入三个参数，运行客户端数量，每个连接的次数，每次连接发送的数量." << endl;
		exit(1);
	}
	Args arg;
	int runCount;
	runCount = atoi(pA[1]);
	arg.runCount_ = atoi(pA[2]);
	arg.sendCount_ = atoi(pA[3]);

	for (int i=1; i<=runCount; i++){
		Args* temp = new Args(arg);
		temp->id_ = i;
		pthread_create(new pthread_t, NULL,  Tmain, temp);
	}
	sleep(1000);
}
