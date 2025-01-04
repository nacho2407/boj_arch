#include "stdio.h"

int main()
{
    int n;
    scanf("%d", &n);

    int num[1000];
    for(int i = 0; i < n; i++)
        scanf("%d", num + i);
    
    int tmp;
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(num[j - 1] > num[j])
            {
                tmp  = num[j - 1];
                num[j - 1] = num[j];
                num[j] = tmp;
            }
            else
                break;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d\n", num[i]);

    return 0;
}
