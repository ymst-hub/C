#include <stdio.h>
int algo1(int a[],int n);
int algo2(int a[], int n);

int main(void){
    int a1[] = {1,2,3,4,5};
    int n1 = 5;
    //algo1(a1,n1);
    int a2[] = {167, 180, 153, 159, 175};
    int n2 = 5;
    algo2(a2, n2);
    return 0;
}

int algo1(int a[],int n){
    int min;
    for(int i = 0;i < n;i++){
        if(i == 0){
            min = a[i];
        }else{
            if(min > a[i]){
                min = a[i];
            }
        }
    }
    printf("%d\n",min);
    return 0;
}

int algo2(int a[], int n){
    int sum = 0;
    int ave = 0;
    for(int i = 0;i < n;i++){
        sum += a[i];
    }
    printf("%d\n", sum);
    ave = sum / n;
    printf("%d\n",ave);
    return 0;
}
