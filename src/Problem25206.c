#include <stdio.h>
#include <string.h>

int main()
{
    char tmpStr[51];
    double tmp;
    char grade[3];
    double classValue = 0;
    double totalGrade = 0;

    for(int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", tmpStr, &tmp, grade);

        switch(grade[0])
        {
            case 'A':
                totalGrade += 4.0 * tmp;
                break;
            case 'B':
                totalGrade += 3.0 * tmp;
                break;
            case 'C':
                totalGrade += 2.0 * tmp;
                break;
            case 'D':
                totalGrade += 1.0 * tmp;
                break;
        }

        if(grade[0] != 'P')
        {
            classValue += tmp;

            if(grade[0] != 'F' && grade[1] == '+')
                totalGrade += 0.5 * tmp;
        }
    }

    if(classValue == 0)
    {
        classValue = 1;
        totalGrade = 0;
    }
    printf("%lf", totalGrade / classValue);
        

    return 0;
}
