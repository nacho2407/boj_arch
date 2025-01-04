#include <iostream>
#include <cmath>

void make_sieve(int* sieve, int size)
{
    sieve[0] = 1;
    sieve[1] = 1;

    for(int i = 2; i < sqrt(size); i++)
    {
        if(sieve[i] == 1)
        {
            continue;
        }

        for(int j = 2; i * j < size; j++)
        {
            sieve[i * j] = 1;
        }
    }
}

int main(void)
{
    const static int MAX_SIZE = 1000000;
    int* sieve = new int[MAX_SIZE] { 0 };
    make_sieve(sieve, MAX_SIZE);

    int t = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n = 0, count = 0;
        std::cin >> n;

        // n의 절반까지만 확인하면 된다. 나머지 절반은 앞과 중복되기 때문.
        for(int j = 2; j <= n / 2; j++)
        {
            if(sieve[j] == 0 && sieve[n - j] == 0)
            {
                count++;
            }
        }

        std::cout << count << '\n';
    }

    std::cout << std::flush;

    delete[] sieve;

    return 0;
}
