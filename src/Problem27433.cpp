#include <iostream>

long long int factorial(long long int n);

int main(void)
{
    long long int n = 0;
    std::cin >> n;

    std::cout << factorial(n);

    return 0;
}

long long int factorial(long long int n)
{
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}
