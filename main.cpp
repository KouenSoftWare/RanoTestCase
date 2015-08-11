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
#include <sys/wait.h>  
#include <string.h>
#include <netdb.h>

#include "CommunicationsProtocol.h"
#include "echoEvent.h"

using namespace std;
#define SERVPORT 7392
#define MAXDATASIZE 100    /*每次最大数据传输量 */

int main(int argc, char *argv[])
{
	char recvBuf[1024];
	for(int i = 0; i != 1000; i++){
    int sock_fd;
    struct hostent *host;
    struct sockaddr_in serv_addr;
	char ip[20];
	strcpy(ip, "127.0.0.1");
    host=gethostbyname(ip);
    
    if((sock_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket创建出错！");
        exit(1);
    }
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(SERVPORT);
    serv_addr.sin_addr = *((struct in_addr *)host->h_addr);
    bzero(&(serv_addr.sin_zero),8);
    if(connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr)) == -1) {
        perror("connect出错！");
        exit(1);
    }
    cout << "建立链接成功" << endl;
	
	echoEvent event;
	event.l1.level2Size = sizeof(echoEvent);
	event.l1.jumpCount = 0;
	event.l1.sourceID = 0;
	event.l1.targetID = 1;
	event.l1.missCount = 0;
	event.l1.serialNumber = i;
	event.setName("echoEvent");
	memcpy(event.l1.level2Name, "echoEvent", 32);	
	memcpy(event.l1.featureCode, "$#@!", 4);	

	strcpy(event.msg, "Hello,World!");	
	int sendlen =  send(sock_fd, &event, sizeof(echoEvent), 0);
//	recv(sock_fd, &recvBuf, 1024, 0);
	sleep(1);
    cout << "断开链接 recv:" << recvBuf << endl;
    close(sock_fd);
	}
}
