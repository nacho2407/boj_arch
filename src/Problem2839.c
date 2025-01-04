#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = n / 5; i >= 0; i--)
    {
        if((n - i * 5) % 3 == 0)
        {
            printf("%d", (n - i * 5) / 3 + i);
            return 0;
        }
    }

    printf("%d", -1);
    return 0;
}
