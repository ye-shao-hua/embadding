#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(){
    pid_t pid;
    char fifo[]="./a";
    int n;
    n=mkfifo(fifo,0666);
    if(n<0){
        printf("make fifo fail\n");
    }else{
        printf("make fifo success\n");
    }
    pid=fork();
    if(pid<0){
        printf("error\n");
    }else if(pid!=0){
        int fd;
        fd=open(fifo,O_WRONLY);
        while(1){
            write(fd,"hello",5);
            sleep(1);
        }
    }else{
        int fd;
        fd=open(fifo,O_RDONLY);
        char buffer[5];
        while(1){
            read(fd,buffer,5);
            printf("%s\n",buffer);
        }
    }
    return 0;
}
