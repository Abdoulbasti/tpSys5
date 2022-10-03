
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,  char** argv)
{
	char *mess = "MESSAGE A PLABET TERRE ET SES HABITANTS.\n";
	//read(1, mess, 100);
	write(1, mess, strlen(mess));

	return 0;
}
