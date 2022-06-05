#include<stdio.h>
#include<stdlib.h>
int main(void){
    int moji,i = 0;
    char *mojip;
    while (1)
    {
        //ここで入力まちが発生する
        moji = getchar();
        printf("取得した文字：%c\n", moji);
        *mojip = moji;
        i = atoi(mojip);
        printf("%d\n",i);

    }
    
}