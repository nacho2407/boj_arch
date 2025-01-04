#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int count[10001] = { 0 };
    int n;
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &n);
        count[n]++;
    }

    for(int i = 1; i < 10001; i++)
    {
        for(int j = count[i]; j > 0; j--)
            printf("%d\n", i);
    }

    return 0;
}
