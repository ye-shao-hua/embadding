#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
    //execl("/bin/ls","ls","-l",NULL);
    //execlp("ls","ls","-l",NULL);
    system("ls -l");
    return 0;
}
