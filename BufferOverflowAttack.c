#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	char buf[8];
	strcpy(buf,argv[1]);
	printf("%s\n",buf);
	return 0;
}

