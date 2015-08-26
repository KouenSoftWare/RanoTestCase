#include "Common.h"
#include <string.h>
#include <stdio.h>
#include "Protocol.pb.h"

#define SERVPORT 17772
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
	        cout << "socket创建出错！" << endl;;
	        exit(1);
	    }
		bzero(&serv_addr,sizeof(serv_addr));
	    serv_addr.sin_family=AF_INET;
	    serv_addr.sin_port=htons(SERVPORT);
		serv_addr.sin_addr.s_addr = htons(INADDR_ANY);
	    bzero(&(serv_addr.sin_zero),8);
		if(connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr)) == -1) {
			cout << ("connect出错！") << endl;
			exit(1);
		}

		HeadProtocol head;
		TestProtocol test;
		test.set_status(10001);
		test.set_msg("第一次发送信息");
		string str_test, str_head;
		test.SerializeToString(&str_test);

		char cHeadSize[10];

		head.set_access_point_fd(0);
		head.set_source_id(1);
		head.set_target_id(10001);
		head.set_proto_body_name("TestProtocol");
		head.set_proto_body_buffer(str_test);
		head.set_proto_body_size(str_test.size());
		head.SerializeToString(&str_head);
		sprintf(&cHeadSize[0], "%d", str_head.size());
		send(sock_fd, &cHeadSize[0], 8, 0);
		send(sock_fd, str_head.c_str(), str_head.size(), 0);
		memset(&recvBuf[0], 0, 1024);
		int ret = recv(sock_fd, &recvBuf[0], 1024, 0);
		
		head.ParseFromArray(&recvBuf[8], ret-8);
		head.set_source_id(1);
		head.set_target_id(10001);
		head.SerializeToString(&str_head);
		sprintf(&cHeadSize[0], "%d", str_head.size());
		send(sock_fd, &cHeadSize[0], 8, 0);
		send(sock_fd, str_head.c_str(), str_head.size(), 0);

		memset(&recvBuf[0], 0, 1024);
		ret = recv(sock_fd, &recvBuf[0], 1024, 0);
	
		head.ParseFromArray(&recvBuf[8], ret-8);
		head.set_source_id(1);
		head.set_target_id(10001);
		head.SerializeToString(&str_head);
		sprintf(&cHeadSize[0], "%d", str_head.size());
		send(sock_fd, &cHeadSize[0], 8, 0);
		send(sock_fd, str_head.c_str(), str_head.size(), 0);

		memset(&recvBuf[0], 0, 1024);
		ret = recv(sock_fd, &recvBuf[0], 1024, 0);

		head.ParseFromArray(&recvBuf[8], ret-8);
		head.set_source_id(1);
		head.set_target_id(10001);
		head.SerializeToString(&str_head);
		sprintf(&cHeadSize[0], "%d", str_head.size());
		send(sock_fd, &cHeadSize[0], 8, 0);
		send(sock_fd, str_head.c_str(), str_head.size(), 0);

		memset(&recvBuf[0], 0, 1024);
		ret = recv(sock_fd, &recvBuf[0], 1024, 0);

		close(sock_fd);
	}
	gettimeofday(&gend, NULL);
	double t = (gend.tv_sec*1000+gend.tv_usec/1000 - gstart.tv_sec*1000+gstart.tv_usec/1000);
	cout << args->id_ <<  " : 总共用时 " << t << "ms" 
		 << "\t每个包平均用时:" << ((t/args->runCount_)/args->sendCount_)*1000 << "us"  << endl;
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
