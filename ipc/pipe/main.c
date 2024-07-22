#include <stdio.h>
#include <unistd.h>

int main(){
    int pipe_fd[2];
    pid_t pid;
    pipe(pipe_fd);
    pid=fork();
    if(pid<0){
        printf("error\n");
    }else if(pid!=0){
        close(pipe_fd[0]);
        while(1){
            write(pipe_fd[1],"hello",5);
            sleep(1);
        }
    }else{
        close(pipe_fd[1]);
        char buffer[5];
        while(1){
            read(pipe_fd[0],buffer,5);
            printf("%s\n",buffer);
            sleep(1);
        }
    }

}
