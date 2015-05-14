// TestServer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <Winsock2.h>
#include <stdio.h>
#pragma comment(lib,"WS2_32.lib")
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	WSADATA wsd;
	SOCKET server;                                            //������socket
	SOCKADDR_IN addrSrv;
	char sendBuf[1024];
	char recvBuf[1024];
	SOCKADDR_IN addrClient;
	SOCKET client;                                            //���ӵĿͻ���socket
	int len;
	if (WSAStartup(MAKEWORD(2, 2), &wsd) != 0)
	{
		printf("start up failed!\n");
		return -1;
	}
	server = socket(AF_INET, SOCK_STREAM, 0);                    //����socket
	addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY);            //���õ�ַ
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(6000);                            //���ö˿ں�
	bind(server, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));        //��
	listen(server, 5);                                        //�������������
	len = sizeof(SOCKADDR);
	while (1)
	{
		client = accept(server, (SOCKADDR*)&addrClient, &len);    //���տͻ�������
		//char buf[1024];
		//_snprintf(buf, 1024,"%s", );
		//sprintf(sendBuf, "Welcome %s ",
		//	inet_ntoa(addrClient.sin_addr));
		send(client, sendBuf, strlen(sendBuf) + 1, 0);            //������Ϣ�ͻ���
		recv(client, recvBuf, 100, 0);                            //���տͻ�������
		printf("%s\n", recvBuf);
		string s = recvBuf;
		closesocket(client);
	}
	closesocket(client);                                    //�ر�����
	WSACleanup();
	return 0;
}

