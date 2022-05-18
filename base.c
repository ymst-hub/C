#include <stdio.h>//擬似命令

//./Compile.zsh 実行したいファイル名
//上記で一回で実行できる

//型名、関数名　引数　処理
int main (void)
{
    
    printf("hell \tworld\n");
    //バックスラッシュはマックでは区別する
    printf("he \tworld\n");

    int seisu;//整数の宣言
    seisu=100;//代入
    seisu+=100;//100を足す
    seisu++;//1を足す
    double syousu;//実数の宣言
    syousu=1/3;
    printf("%d\n",1.05*4);
    printf("%f\n",syousu);
    printf("%d円\n",100+seisu);
    printf("%d\n",100);
    printf("%d\n",0100);//0は8進数
    printf("%d\n",0xFA);//0xは16進数
    printf("%f\n",01.11);//少数は%f

    //キャスト（型変換）
    printf("%d\n",(int)(1.05*2));
    printf("%4.d\n",100);//桁数を４桁に
    printf("%8.d\n",100);//桁数を８桁に
    
    char data;
    scanf("%d",&data);
    printf("%d\n",data);

    return 0;
}
    