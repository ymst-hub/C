#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    char str[32],*ch;//chはカンマ区切りに必要
    int val,val3[10],i,j;
    double val2;
    //gets(str);//キーボードの入力を取得
    fgets(str,sizeof(str),stdin);//stdinはキーボード
    //C言語は全ての周辺機器をファイルとして扱える
    puts(str);
    //実行すると文字上限で切る
    //また、fgets関数は文字の終わりに\nを格納する
    val = atoi(str);//整数の場合
    printf("%d",val);
    val2 = atof(str);//実数の場合
    printf("%f",val2);

    //文字の取り出し
    ch = strtok(str,",\n");//区切り文字を検索してEOSと置き換える
    for(i=0;i<10;i++){//ここを変更すれば、横が可変でも対応可能
        if(ch == NULL){
            break;
        }else{
            val3[i] = atoi(ch);
        }
        ch = strtok(NULL,",\n");
    }
    for(j=0;j<i;j++) printf("%d\n",val3[j]);
    return 0;
}
