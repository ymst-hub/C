#include<stdio.h>

int main(void){
    int buf[4];//配列にするとその文取得可能
    FILE *file;

    file = fopen("test.dat","rb");
    fread(&buf,sizeof(buf),4,file);//取り込む数を指定する（４）
    fclose(file);

    printf("%d\n",buf[3]);

    return 0;

}