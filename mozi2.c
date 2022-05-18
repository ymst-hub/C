#include <stdio.h>
#include <string.h>

int main(void){
    int sum;
    char str[100];
    scanf("%s",str);//scanfの最後の入力には\0がつく

    for(int i = 0;str[i]!='\0';i++){//0ではない間続ける
        sum++;
    }
    printf("%d\n",sum);

    sum = strlen(str);//string.hをincludeするとできる。やることは文字数を数える
    printf("%d\n",sum);

}