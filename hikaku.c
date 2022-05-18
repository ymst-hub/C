#include <stdio.h>//擬似命令

int main(void){
    int suuti;
    
    printf("数字を入力してください\n");
    scanf("%d",&suuti);
    if(suuti == 10) {
        printf("正しい値です");
        
    }
    if(suuti < 10) printf("小さいです");
    if(suuti > 10) printf("大きすぎます");
    return 0;
    //&& かつ
    //|| または
    //! ノット
}