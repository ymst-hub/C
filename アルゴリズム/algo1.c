#include <stdio.h>
int algo1_7(void);
int algo1_8(void);
int algo1_9(void);
int algo1_10(void);
int algo1_11(void);
int algo1_12(void);

int main(void)
{

    //algo1_7();
    //algo1_8();
    //algo1_9();
    //algo1_10();
    algo1_11();
    return 0;
}

int algo1_7(void)
{
    int n;
    puts("1からnまでの総和を計算します");
    // putsとprintfの違い
    /*
    puts 文字列出力に特化、計算コストも少し低いが、必ず改行される
    printf フォーマットを自分で指定できる。"%s %d %p"など、また、変数も出力できる

    要するに
    puts = printf("%s")ということ
    */
    puts("nの値");
    scanf("%d", &n);
    int sum = 0;
    int i = 1; //カウンタ用変数
    while (i <= n)
    {
        printf("%d", i);
        sum = sum + i;
        i++;
        if (i <= n)
            printf(" + "); // i++ した後のため、正常に出力される
    }
    printf(" = %d\n", sum);
    return 0;
}

int algo1_8(void)
{
    int n;
    int i = 1;
    int sum = 0;
    scanf("%d", &n); //メモリ参照
    if (n >= 10)
    {
        i = 11;
        sum = (1 + 10) * 5;
    }
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("%d\n", sum);
    return 0;
}

int algo1_9(void){
    int min,max;
    int buf1,buf2;
    int sum = 0;
    scanf("%d %d",&buf1,&buf2);
    if(buf1 <= buf2){
        min = buf1;
        max = buf2;
    }else{
        min = buf2;
        max = buf1;
    }
    while(min <= max){
        sum += min;
        min++;
    }
    printf("%d",sum);
    return 0;
}

int algo1_10(void){
    int a,b;
    puts("B-Aを行います");
    printf("%s","Aを入力してください:");
    scanf("%d",&a);
    do{
        printf("%s", "Bを入力してください:");
        scanf("%d",&b);
    }while (b <= a);
    printf("%d",b - a);
    
    return 0;
}

int algo1_11(void){
    int Seisu;
    int i;
    puts("整数の桁数を表示します");
    do{
        scanf("%d", &Seisu);
    }while(Seisu < 0);
    for(i= 0;Seisu > 0;i++){
        Seisu = Seisu/10;
    }
    printf("桁数は%dです",i);
    return 0;
}

int algo1_12(void){
    
    return 0;
}