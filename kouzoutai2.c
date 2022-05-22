#include<stdio.h>
#include<string.h>

struct student {//全てで一つの場合の書き方
    int year;//学年
    int clas;//クラス
    int num;//出席番号
    char name[64];//名前
};//;が必要

typedef struct {//宣言ごとに変更する時の書き方
    int year;//学年
    int clas;//クラス
    int num;//出席番号
    char name[64];//名前
}students;//

void print(students data);//typedefではないとエラーが出る

int main(void){
    //struct student data,data2;//呼び出し
    students data,data2;//typedefの時の宣言
    data.year = 10;//studantのyearに学年を代入
    data.clas = 4;
    data.num = 1;
    strcpy(data.name,"YU");

    data2 = data;//data2に代入

    printf("%d\n",data.year);
    printf("%d\n",data.clas);
    printf("%d\n",data.num);
    printf("%s\n",data.name);
    printf("\n");
    print(data2);
    return 0;
}

void print(students data){//配列が含まれていても、変更は反映されない（コピーが渡されているため）
    printf("%d\n",data.year);
    printf("%d\n",data.clas);
    printf("%d\n",data.num);
    printf("%s\n",data.name);
}

