#include<stdio.h>
#include<string.h>

struct student {
    int year;//学年
    int clas;//クラス
    int num;//出席番号
    char name[64];//名前
};//;が必要

int main(void){
    struct student data,data2;//呼び出し
    data.year = 10;//studantのyearに学年を代入
    data.clas = 4;
    data.num = 1;
    strcpy(data.name,"YU");

    data2 = data;//data2に代入

    printf("%d\n",data.year);
    printf("%d\n",data.clas);
    printf("%d\n",data.num);
    printf("%s\n",data.name);
    printf("\n\n");
    printf("%d\n",data2.year);
    printf("%d\n",data2.clas);
    printf("%d\n",data2.num);
    printf("%s\n",data2.name);


    return 0;
    
}