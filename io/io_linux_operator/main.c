#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int fd;
    int cnt;
    fd=open("a.txt",O_CREAT|O_EXCL);
    const char *buffer[]={"hello,world"};
    cnt=write(fd,buffer,sizeof(buffer));
    printf("%d\n",cnt);
    cnt=close(fd);
    printf("%d\n",cnt);
    fd=open("a.txt",O_RDONLY);
    char buffer1[80];
    cnt=read(fd,buffer1,sizeof(buffer1));
    printf("%d\n",cnt);
    printf("%s",buffer1);
}
