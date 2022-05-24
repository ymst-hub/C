#include<stdio.h>

int main(void){
    FILE *file;
    int i = 100;
    file = fopen("test.txt","w");//ファイルの書き込み
    //r読み込み、ファイルなしは失敗
    //r+読み書き、ファイルなしは失敗
    //w書き込み、ファイルあっても空のファイルを作る
    //w+読み書き、ファイルあっても空のファイルを作る
    //a追加書き込み、ファイルがないときは作る
    //a+読み書き、ファイルがないときは作る
    fprintf(file,"hello");//ファイルへの書き込み
    fprintf(file,"%d",i);//ファイルへの書き込み
    fclose(file);//閉じる

    file = fopen("test.txt","r");//ファイルの書き込み
    fscanf(file,"%d",&i);
    fclose(file);//閉じる
    printf("%d",i);
    return 0;
}