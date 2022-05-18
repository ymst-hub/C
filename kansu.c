#include <stdio.h>//擬似命令

int print2(void);//プロトタイプ宣言で先に記載もできる。
int num;//グローバル変数

int print(void){//mainメソッドから呼ばれるメソッドは先に書く
    static int yey;//静的なローカル変数→関数外では使用不可、でも、プログラム終了まで残る。
    num ++;
    printf("printメソッドが呼ばれました\n%d\n",num);
    return 0;
}

int main(void){
    printf("こっちから起動します\n%d\n",num);
    print();
    print2();
return 0;
}
int print2(void){//mainの後に書いてもOK（プロトタイプ宣言をしているから！）
    num ++;
    printf("print2メソッドが呼ばれました\n%d\n",num);
    return 0;
}