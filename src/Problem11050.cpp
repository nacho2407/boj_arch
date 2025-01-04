#include <iostream>

int main(void)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    if(k > n / 2)
    {
        k = n - k;
    }

    long long int result = 1;
    for(int i = 0; i < k; i++)
    {
        result *= n--;
    }
    for(int i = k; i > 0; i--)
    {
        result /= k--;
    }

    std::cout << result << std::endl;

    return 0;
}
