#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;

    int min = 1000000, max = 2;

    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;

        if(min > temp)
        {
            min = temp;
        }
        if(max < temp)
        {
            max = temp;
        }
    }

    std::cout << min * max << std::endl;

    return 0;
}
