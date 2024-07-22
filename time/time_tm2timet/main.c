#include <stdio.h>
#include <time.h>

int main(){
    time_t t1;
    struct tm *tt1;
    time(&t1);
    tt1=localtime(&t1);
    time_t t2;
    t2=mktime(tt1);
    printf("%d\n",t2);
    return 0;
}
