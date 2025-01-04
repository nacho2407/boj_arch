#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}

int main()
{
    int size;
    scanf("%d", &size);

    int *valArr = (int *) malloc(sizeof(valArr[0]) * size);
    int *sortedArr = (int *) malloc(sizeof(sortedArr[0]) * size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", valArr + i);
        sortedArr[i] = valArr[i];
    }

    qsort(sortedArr, size, sizeof(sortedArr[0]), compare);

    int sortedSize = 1;
    for(int i = 1; i < size; i++)
    {
        if(sortedArr[i - 1] != sortedArr[i])
        {
            sortedArr[sortedSize] = sortedArr[i];
            sortedSize++;
        }
    }

    for(int i = 0; i < size; i++)
    {
        for(int mid, left = 0, right = sortedSize - 1; left <= right;)
        {
            mid = (left + right) / 2;
            if(valArr[i] == sortedArr[mid])
            {
                printf("%d ", mid);
                break;
            }
            else if(valArr[i] > sortedArr[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    free(sortedArr);
    free(valArr);

    return 0;
}
