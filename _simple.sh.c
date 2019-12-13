#include <stdio.h>
#include <sys/stat.h>
#include <string.h>

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




int main (int argc,char *argv[])
{
    int ret = 0;

    for(int i=0;i<2;i++){
        strcpy(buffer,path[i]);
	int len = strlen(buffer);
	strcpy(buffer+len,argv[1]);
	 printf("%s\n",buffer);
	if ( isPathExist ( buffer ) ){
	   printf("found %s\n",buffer);
	}
    }


//for(int i=0;i<argc;++i){
//        printf("i=%d:%s\n",i,argv[i]);
//    }

    return ret;
}
