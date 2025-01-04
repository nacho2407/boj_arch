#include "stdio.h"

int isDevilNum(int n)
{
    for(int i = n; i >= 666; i /= 10)
    {
        if(i % 1000 == 666)
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 666; ; i++)
    {
        if(isDevilNum(i))
        {
            count++;
            if(count == n)
            {
                printf("%d", i);
                break;
            }
        }
    }

    return 0;
}
