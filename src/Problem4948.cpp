#include <iostream>

int main(void)
{
    const static int MAX_SIZE = 123546 * 2;

    int n = 0;
    std::cin >> n;

    int *sieve = new int[MAX_SIZE] { 0 };
    sieve[0] = 1;
    sieve[1] = 1;

    for(int i = 2; i <= MAX_SIZE; i++)
    {
        if(sieve[i] == 1)
        {
            continue;
        }

        for(int k = 2; i * k <= MAX_SIZE; k++)
        {
            sieve[i * k] = 1;
        }
    }

    int count = 0;
    for(; n != 0; std::cin >> n)
    {
        count = 0;
        for(int i = n + 1; i <= n * 2; i++)
        {
            if(sieve[i] == 0)
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
