#include <stdio.h>
int main (void){
    int i =1;
    scanf("%d",&i);
    if(i <= 0) 
        printf("hello");
    else
        printf("OK");


    
    if(i <= 0) {
        printf("hello");
    }else{
        printf("OK");
    }

    switch (i)
    {
    case 1:
        printf("yaa");
        break;//breakをなくすと下の処理がなくなるため、124などでケースをまとめることも可能
    case 2:
        printf("hey");
        break;
    default:
    printf("default");
        break;
    }


}