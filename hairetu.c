#include <stdio.h>//擬似命令
#include <string.h>//memcpyを使うために必要な宣言

int main(void){
    int array[100];//100個の配列0〜９９まで入る
    int array2[]={100,200,300};//要素数を指定しなくてもOK（宣言の時のみ）
    int array3[]={1,2,3,4,5,6};
    int array4[]={6,5,4,3,2,1};
    array[1]=0;//途中だとこうする

    array[9]=0;
    printf("1:%d\n",array[9]);//String型はprintfできない
    array[9]++;
    printf("2:%d\n",array[9]);

    for(int i = 0;i < sizeof(array2);i++){//sizeof(配列)で要素数を出せる
        printf("%d\n",array2[i]);
    }

    for(int i = 0;i<sizeof(array3);i++){
        array2[i]=array3[i]; 
    }

    for(int i = 0;i < sizeof(array2);i++){//sizeof(配列)で要素数を出せる
        printf("%d\n",array3[i]);
    }
    memcpy(array3,array4,sizeof(array3));//配列のコピー関数

    for(int i = 0;i < sizeof(array3);i++){//sizeof(配列)で要素数を出せる
        printf("%d\n",array3[i]);
    }


    return 0;
}