#include <stdio.h>

int main(void){
    char *str;
    str = (int*)malloc(sizeof(int)*100);//100文字分のメモリを宣言
    int *p;
    int N = 0;

    fgets(str,sizeof(str),stdin);
    sscanf(str,"%d",&N);

    p = (int*)malloc(sizeof(int)*N);//配列を動的に宣言

    for(int i = 0;i < N;i++){
        printf("%p",p[i]);//OK
    }
}