#include <stdio.h>

typedef struct
{
    int age;
    char name[101];
} User;

int main()
{
    int size;
    scanf("%d", &size);

    User userList[size];

    for(int i = 0; i < size; i++)
        scanf("%d %s", &userList[i].age, &userList[i].name);

    int idx[200] = {0};
    for(int i = 0; i < size; i++)
        idx[userList[i].age - 1]++;

    int tmp[200] = {0};
    for(int i = 1; i < 200; i++)
    {
        tmp[i] = tmp[i - 1] + idx[i - 1];
    }

    User resList[size];
    for(int i = 0; i < size; i++)
    {
        resList[tmp[userList[i].age - 1]] = userList[i];
        tmp[userList[i].age - 1]++;
    }

    printf("%d %s", resList[0].age, resList[0].name);
    for(int i = 1; i < size; i++)
        printf("\n%d %s", resList[i].age, resList[i].name);

    return 0;
}
