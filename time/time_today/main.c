#include <time.h>
#include <stdio.h>

int main(){
    time_t t1;
    time(&t1);
    struct tm *tt1,*tt2;
    tt1=gmtime(&t1);
    printf("格林威治时间为：%d-%d-%d-%d-%d-%d\n",1900+tt1->tm_year,1+tt1->tm_mon,tt1->tm_mday,tt1->tm_hour,tt1->tm_min,tt1->tm_sec);
    tt2=localtime(&t1);
    printf("本地时间为：%d-%d-%d-%d-%d-%d\n",1900+tt2->tm_year,1+tt2->tm_mon,tt2->tm_mday,tt2->tm_hour,tt2->tm_min,tt2->tm_sec);
    return 0;

}
