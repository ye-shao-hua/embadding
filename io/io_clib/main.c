#include <stdio.h>

int main(){
    FILE* fp;
    fp=fopen("a.txt","w");
    fputs("hello world",fp);
    fclose(fp);
    return 0;
}
