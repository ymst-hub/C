#include <stdio.h>
#include <string.h>//文字のコピー
#include <stdlib.h>//文字のatoi関数
#include <ctype.h>//判定系の宣言
//isalnum 英数字の判定
//isdigit 10進数
//isxdigit 16進数
//islpha 英字
//isupper 英字大文字のみ
//islower 英字小文字のみ
//ispunct 記号
//isspace スペース

//charは文字コードを記憶する
int main(void){
    char c = 'A';//charは１文字まで保存可能、囲みは''
    char d = 65;//文字コードでの指定も可
    printf("%c\n%c\n",c,d);//%cでキャラ代入
    
    char mozi[]={'Y','A','M','A','S','H','I','T','A'};//宣言時にしか使えない
    printf("%s\n",mozi);

    int suuti = atoi(mozi);//文字列を数値に
    printf("%d\n",suuti);
    char mozi2[10];
    strcpy(mozi2,"Hello");
    printf("%s\n",mozi2);
    char mozi3[10];
    strncpy(mozi3,mozi2,3);//文字を切り出す
    mozi3[3]='\0';//EOSを追加する（最後の文字）
    printf("%s\n",mozi3);
    strcat(mozi2,mozi3);
    printf("%s\n",mozi2);
    
    char awaseru[100];
    sprintf(awaseru,"%s%s%d",mozi2,mozi3,suuti);//文字を合わせられる
    printf(awaseru);
    return 0;

}