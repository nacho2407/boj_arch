#include <stdio.h>
#include <stdlib.h>

int compare(const void *i, const void *j)
{
    return *(int *) j - *(int *) i;
}

int main()
{
    int n;
    scanf("%d", &n);

    int num[10];
    int size = 0;
    for(int i = 0; n > 0 && i < 10; i++)
    {
        num[i] = n % 10;
        size++;
        n /= 10;
    }

    qsort(num, size, sizeof(num[0]), compare);

    for(int i = 0; i < size; i++)
        printf("%d", num[i]);
    printf("\n");

    return 0;
}
