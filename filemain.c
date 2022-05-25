#include<stdio.h>

int main(int argc,char *argv[]){//コマンドライン引数の取得
//argc コマンドラインの数
//argv 文字配列へのポインタ変数
    if(argc > 1){
        printf("%s\n",argv[1]);
    }
    fflush(stdin);//出力バッファを強制出力する
    //だからフルパスが表示される
    getchar();
    return 0;

}