#include <stdio.h>
#include <unistd.h>

int main(){
    printf("现在程序未分裂,进程id为：%d\n",getpid());
    pid_t pid;
    pid=fork();
    if(pid<0){
        printf("创建子进程失败\n");
    }else if(pid==0){
        printf("这是子进程，id为：%d,父进程id为：%d\n",getpid(),getppid());
    }else{
        printf("这是父进程，id为：%d,子进程id为：%d\n",getpid(),pid);
    }
    return 0;
}
