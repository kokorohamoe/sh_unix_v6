#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>

const char const * path[] = {
    "/usr/bin/",
    "/bin/"
};
#define BUFFERSIZE 4096
char stat_buffer[BUFFERSIZE];

int isPathExist(const char *path){
    if( stat ( path , (struct stat *) stat_buffer) == 0 ){
        return -1;
    }else{
	return 0;
    }
}

char buffer[BUFFERSIZE];


char prompot[BUFFERSIZE];
char linebuffer[BUFFERSIZE];

int main (int argc,char *argv[])
{
  int ret = 0;
  printf("L\r\nL\r\n");
  strcpy(prompot," >");

  while(!0){

    printf(prompot);

    for(int i=0;i<2;i++){
	printf(prompot);
	scanf("%s",linebuffer);
        strcpy(buffer,linebuffer);
	int len = strlen(buffer);
	strcpy(buffer+len,argv[1]);
	 printf("%s\n",buffer);
	if ( isPathExist ( buffer ) ){
	   printf("found %s\n",buffer);
	   system(buffer);
	   break;
	}
    }

  }


//for(int i=0;i<argc;++i){
//        printf("i=%d:%s\n",i,argv[i]);
//    }

    return ret;
}
