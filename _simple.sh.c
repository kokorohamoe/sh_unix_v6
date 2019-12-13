#include <stdio.h>
#include <sys/stat.h>
#include <string.h>

const char const * path[] = {
    "/usr/bin/",
    "/bin/"
};

int isPathExist(const char *path){
    if( stat ( path , NULL ) == 0 ){
        return -1;
    }else{
	return 0;
    }
}

#define BUFFERSIZE 4096
char buffer[BUFFERSIZE];




int main (int argc,char *argv[])
{
    int ret = 0;

    for(int i=0;i<2;i++){
        strcpy(buffer,path[i]);
	int len = strlen(buffer);
	strcpy(buffer+len,argv[1]);
	printf("%s\n",buffer);
    }


//for(int i=0;i<argc;++i){
//        printf("i=%d:%s\n",i,argv[i]);
//    }

    return ret;
}
