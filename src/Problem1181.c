#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *i, const void *j)
{
    if(strlen((char *) i) > strlen((char *) j))
        return 1;
    else if(strlen((char *) i) < strlen((char *) j))
        return -1;
    else
        return strcmp((char *) i, (char *) j);
}

int main()
{
    int n;
    scanf("%d", &n);

    char list[20000][51];

    for(int i = 0; i < n; i++)
        scanf("%s", list[i]);
    
    qsort(list, n, sizeof(list[0]), compare);

    int idx = 1;
    for(int i = 1; i < n; i++)
    {
        if(strcmp(list[i-1], list[i]) != 0)
        {
            strcpy(list[idx], list[i]);
            idx++;
        }
    }

    for(int i = 0; i < idx; i++)
        printf("%s\n", list[i]);

    return 0;
}
