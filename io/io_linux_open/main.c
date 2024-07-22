#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

int main(){
    char file_name[128]="a.txt";
    int fd=open(file_name,O_EXCL|O_CREAT);
    if(fd==-1){
        printf("open error");
        return -1;
    }else{
        printf("open success");
    }
}

