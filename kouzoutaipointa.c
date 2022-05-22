#include<stdio.h>
#include<string.h>

typedef struct{
    int num;
    int num2;
    char name[64];
}point;

int main(void){
    point data;
    point *pdata;
    //初期化
    pdata = &data;
    //通常変数モードで利用
    (*pdata).num = 10;
    strcpy(*pdata->name,"YU");//->の書き方で(*pdata)と同じ挙動をする

    return 0;
}