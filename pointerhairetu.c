#include<stdio.h>

int func(int *data);

int main(void){
    int *data;
    int i;
    int average = 0;
    int array[3] = {1,2,6};
    int ave = func(array);
    printf("ave=%d\n",ave);
    data = array;//ポインタに配列を入れる

    for(i = 0; i < 3;i++){//組み込み系だとfor(data = array;data != array[3],data++){の記載も可
        average += data[i];//ポインタも配列みたいに使える
        // average += *(data+i);//この書き方もできる
    }
    printf("average=%d\n",average/3);
    
}

int func(int array[]){//配列だが、ポインタで受け取る
    int ave,i;
    for(i=0;i<3;i++){
        ave += array[i];
    }
    return ave / 3;

}