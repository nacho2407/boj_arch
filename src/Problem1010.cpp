#include <iostream>

long long int combination(int n, int k)
{
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

    return result;

    return 0;
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n = 0, k = 0;
        std::cin >> k >> n;

        std::cout << combination(n, k) << '\n';
    }

    std::cout << std::flush;

    return 0;
}
