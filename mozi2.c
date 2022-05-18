#include <stdio.h>
#include <string.h>

int main(void){
    int sum,i = 0;
    char str[100];
    char str2[100];
    printf("最初の文字列を入力してください\n");
    scanf("%s",str);//scanfの最後の入力には\0がつく

    printf("次のの文字列を入力してください\n");
    scanf("%s",str2);

    if(sizeof(str)==sizeof(str2)){
        printf("同じ桁です\n");
        for(i = 0;i<sizeof(str)+1;i++){
            if(str[i] != str2[i]) break; 
        }
    }else if(sizeof(str)<sizeof(str2)+1){
        printf("後に入力した方が大きいです\n");
        for(i = 0;i<sizeof(str2)+1;i++){
            if(str[i] != str2[i]) break; 
        }
    }else{
        printf("前に入力した方が大きいです\n");
        for(i = 0;i<sizeof(str)+1;i++){
            if(str[i] != str2[i]) break; 
        }
    }

    if(strcmp(str,str2)==0){//string.hをincludeするとできる。文字の比較を行う
        printf("同じ文字列です\n");
    }else{
        printf("違う文字列です\n");
    }
    sum = strlen(str);//string.hをincludeするとできる。やることは文字数を数える
    printf("文字数は%d\n",sum);

}