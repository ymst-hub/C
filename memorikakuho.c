#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i;
    int *heap;//長期的に利用されるメモリ領域のことをヒープという
    heap = (int *)malloc(sizeof(int) * 10);//メモリ確保する（intの配列１０個分）
    heap = (int *)realloc(heap,sizeof(int) *100);//前のメモリを維持したまま拡張を行う
    //reallocの濫用はメモリがフラグメンテーションする要因になるため１回で多く用意する
    if(heap==NULL) exit(0);//mallocでメモリ確保に失敗した場合終わる

    for(i = 0;i<10;i++){//３０でもエラーは出なかった
        heap[i] = i;
        printf("%d\n",heap[i]);
    }

    free(heap);//確保したメモリを解放する
    printf("%p\n",heap);

    return 0;
}