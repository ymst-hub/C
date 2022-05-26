#include<stdio.h>
#define Tax 0.03 //ここで定数を宣言
#define priceName "価格"//文字列もOK
#define hello printf("hello");
#define suma(X) printf("%d\n",X);//名前の後()で指定すると、その後の式でそのアルファベット部分を引数にできる
#define sum(A,B) printf("%d\n",(A)+(B));//defineを()で括ると引数の計算が意図したものになる
enum{
    ENUM_0,//0で設定される
    ENUM_1,//1
    ENUM_5 = 5,//5で設定される
    ENUM_6//5+1の6で設定する
};//;必須
int main(void){
    int price;
    const int hey = 100;//代入不可の変数（定数）
    hello;//#defineで宣言したprintfが実行される
    printf("本体%s：",priceName);
    scanf("%d",&price);
    price = (int)((1+Tax)*price);
    printf("税込価格：%d\n",price);
    suma(price);
    sum(10,(12+4));//defineは()で括る
    return 0;
}