#include <time.h>
#include <stdio.h>

int main(){
    time_t t1;
    time(&t1);
    printf("现在时间是：%d\n",t1);
    return 0;
}
