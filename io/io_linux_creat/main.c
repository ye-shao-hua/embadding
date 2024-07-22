#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int fd;
    fd=creat("./a.txt",S_IRWXU);
    if(fd!=-1){
        printf("creat success");
    }
    return 0;
}
