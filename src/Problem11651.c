#include <stdio.h>
#include <stdlib.h>

int compare(const void *i, const void *j)
{
    if(((int *) i)[1] > ((int *) j)[1])
        return 1;
    else if(((int *) i)[1] < ((int *) j)[1])
        return -1;
    else
    {
        if(((int *) i)[0] > ((int *) j)[0])
            return 1;
        else if(((int *) i)[0] < ((int *) j)[0])
            return -1;
        else
            return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int point[100000][2];
    for(int i = 0; i < n; i++)
        scanf("%d %d", &point[i][0], &point[i][1]);

    qsort(point, n, sizeof(point[0]), compare);

    for(int i = 0; i < n; i++)
        printf("%d %d\n", point[i][0], point[i][1]);

    return 0;
}
