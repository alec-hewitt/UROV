#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "../include/UROV.h"

int main(int argc, char *argv[])
{
	//GPIO Test
	printf("GPIO Test\n");
	int pin = 1;
	int state = 1;
	toggleGPIO(&pin, &state);

	
	//Transport structure definition
	struct sockaddr_in server;
	server.sin_family = AF_INET;
	server.sin_port = htons(8080);
	server.sin_addr.s_addr = inet_addr("192.168.1.2");
	char *message;

	//Socket definition
	int socket_desc = 0;
	if((socket_desc = socket(AF_INET, SOCK_STREAM, 0) < 0)){
		printf("socket creation error");
		return -1;
	}

	if(connect(socket_desc, (struct sockaddr *)&server , sizeof(server)) < 0){
		printf("connect failed\n");
		return -1;
	}

	printf("connected");

	message = "hello\r\n";

	//if(send() < 0){
	//	printf("send failed");
	//}


	//create connection
	//if(connect(socket_desc, ))

	return 0;
}
