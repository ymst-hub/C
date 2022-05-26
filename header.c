#include<stdio.h>
#include"header.h"
int public;
int sum(int min,int max){
    int num;
    num = (min+max) * (max-min+1)/2;
    public = 100;
    return num;
}