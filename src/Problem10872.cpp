#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;

    int temp = 1;
    
    for(int i = 2; i <= n; i++)
    {
        temp *= i;
    }

    std::cout << temp << std::endl;

    return 0;
}
