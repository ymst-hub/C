#include<stdio.h>

int main(void){
    //int buf = 100;
    int buf[] ={10,100,1000,10000};//配列を一度に書き込める
    FILE *file;
    file = fopen("test.dat","wb");//バイナリファイルのためbをつける
    fwrite(&buf,sizeof(buf),1,file);
    fclose(file);
    return 0;
}