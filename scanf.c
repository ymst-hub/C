#include <stdio.h>//擬似命令

int main(void){
    int min,max,sum;
    
    printf("最大値と最小値を,で区切ってください\n");
    scanf("%d,  %d",&min,&max);

    sum = (min + max) * (max - min + 1) /2;

    printf("%d〜%d の合計は%d です。\n",min,max,sum);

    printf("文字を入力してください\n");
    char str[100];
    scanf("%s",str);
    printf("%s\n",str);
    return 0;

}