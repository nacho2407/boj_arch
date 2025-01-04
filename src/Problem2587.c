#include <stdio.h>

int main()
{
    int num[5];
    int avg = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", num + i);
        avg += num[i];
    }
    avg /= 5;

    int tmp;
    for(int i = 1; i < 5; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(num[j - 1] > num[j])
            {
                tmp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = tmp;
            }
        }
    }

    printf("%d %d\n", avg, num[2]);

    return 0;
}
