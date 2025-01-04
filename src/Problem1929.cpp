#include <iostream>

int main(void)
{
    int m = 0, n = 0;
    std::cin >> m >> n;

    int *sieve = new int[n + 1] { 0 };
    sieve[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        if(sieve[i] == 1)
        {
            continue;
        }

        for(int k = 2; i * k <= n; k++)
        {
            sieve[i * k] = 1;
        }
    }

    for(int i = m; i <= n; i++)
    {
        if(sieve[i] == 0)
        {
            std::cout << i << '\n';
        }
    }

    std::cout << std::flush;

    delete[] sieve;

    return 0;
}
