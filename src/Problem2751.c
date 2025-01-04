#include <stdio.h>
#include <stdlib.h>

int compare(const void *i, const void *j)
{
    return *(int *) i - *(int *) j;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *num = (int *) malloc(sizeof(*num) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", num + i);

    qsort(num, n, sizeof(num[0]), compare);

    for(int i = 0; i < n; i++)
        printf("%d\n", num[i]);

    free(num);

    return 0;
}
