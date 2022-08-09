#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char str[1000];
    int num, min, sec, buf, buf2, seca[50000], sum = 0, kyoku = 0, g = 0;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d %d", &num, &min, &sec);
    fflush(stdin);
    sec = sec + (min * 60);
    for (int i = 0; i < num; i++)
    {
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d %d", &buf, &buf2);
        seca[i] = buf * 60 + buf2;
        fflush(stdin);
    }
    for (int k = 0; k < num; k++)
    {
        for (int j = 0; j < num; j++)
        {
            if (seca[j] == -1 && j == 0)
            {
                while (buf != -1)
                {
                    g++;
                    buf = seca[g];
                }
                k = j;
            }
            else if (seca[j] == -1)
            {
            }
            else
            {
                if (j == 0)
                {
                    buf = seca[j];
                }
                else
                {
                    if (buf > seca[j])
                    {
                        buf = seca[j];
                        seca[j] = -1;
                    }
                }
            }
        }

        if (sum + buf <= sec)
        {
            kyoku++;
        }
    }
    printf("%d", kyoku);

    return 0;
}