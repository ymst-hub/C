#include <stdio.h>
#include <stdlib.h>

//動的配列のやり方は4つ
//forを回す方法
int for1()
{
    int **matrix;
    int i, j, n, m;
    n = 100, m = 100;

    matrix = (int**)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        matrix[i] = (int *)malloc(sizeof(int) * m);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix[i][j] = i * m + j;
            printf("%d\n", matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}



//各行のデータを保持する配列を連続した領域で確保する
int for2(void)
{
    int **matrix, *base_matrix;
    int i, j, n, m;
    n = 100, m = 100;

    matrix = malloc(sizeof(int *) * n);
    base_matrix = malloc(sizeof(int) * n * m);//
    for (i = 0; i < n; i++)
    {
        matrix[i] = base_matrix + i * m;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix[i][j] = i * m + j;
            printf("i=%d j=%d 配列は%d\n",i,j, matrix[i][j]);
        }
    }

    free(base_matrix);
    free(matrix);
    return 0;
}

//一次元配列として確保
int for3(void){
    int *matrix;
    int i, j, n, m;
    n = 100, m = 100;

    matrix = malloc(sizeof(int) * n * m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix[i * m + j] = i * m + j;
            printf("i=%d j=%d 配列は%d\n",i,j,matrix[i * m + j]);
        }
    }

    free(matrix);
    return 0;
}

//低次元側の要素数が固定の場合
int for4(void){
    int(*matrix)[100];//ここで低次元側を宣言
    int i, j, n, m;
    n = 100, m = 100;

    matrix = malloc(sizeof(int) * n * m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix[i][j] = i * m + j;
            printf("%d\n", matrix[i][j]);
        }
    }

    free(matrix);
}


int main(void)
{
    // for1();
    for2();
    //for3();
    //for4();
}

//note
/**
 * 最初に確保するのは行数
 * 次に確保するのが一行当たりの文字数
 * これはfor文内でも同じで、i側が行数、j側が一行あたりの文字数
 * 
 */