#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void create_file(char *filename){
    if(creat(filename,0666)<0){
        printf("creat error\n");
        exit(EXIT_FAILURE);
    }else{
        printf("creat success");
    }
}

int main(int argc,char *argv[]){
    if(argc<2){
        printf("input parameter again\n");
        exit(EXIT_FAILURE);
    }else{
        create_file(argv[1]);
        exit(EXIT_FAILURE);
    }
}
