#include <stdio.h>
#include <stdlib.h>

int pointCompare(const void *i, const void *j)
{
    int *first = (int *) i;
    int *second = (int *) j;

    if(first[0] > second[0])
        return 1;
    else if(first[0] < second[0])
        return -1;
    else
    {
        if(first[1] > second[1])
            return 1;
        else if(first[1] < second[1])
            return -1;
        else
            return 0;
    }
}

int main()
{
    int size;
    scanf("%d", &size);

    int point[100000][2];

    for(int i = 0; i < size; i++)
        scanf("%d %d", point[i], point[i] + 1);

    qsort(point, size, sizeof(point[0]), pointCompare);

    for(int i = 0; i < size; i++)
        printf("%d %d\n", point[i][0], point[i][1]);

    return 0;
}
