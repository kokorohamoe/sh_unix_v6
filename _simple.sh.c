#include <stdio.h>

int main (int argc,char *argv[])
{
    int ret = 0;

    for(int i=0;i<argc;++i){
        printf("i=%d:%s\n",i,argv[i]);
    }

    return ret;
}
