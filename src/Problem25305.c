#include <stdio.h>
#include <stdlib.h>

int compare(const void *i, const void *j)
{
    return *(int *) j - *(int *) i;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int score[1001];
    for(int i = 0; i < n; i++)
        scanf("%d", score + i);

    qsort(score, n, sizeof(score[0]), compare);

    printf("%d", score[k - 1]);

    return 0;
}
