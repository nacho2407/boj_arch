#include <iostream>

#define MAX (long long int) 1000000007

long long int pow(long long int base, long long int exp, long long int mod);

int main(void)
{
    long long int n , k;
    std::cin >> n >> k;

    if(k == 0 || n == k) {
        std::cout << 1 << std::endl;

        return 0;
    }

    if(k == 1 || n - k == 1) {
        std::cout << n << std::endl;

        return 0;
    }

    if(k < n / 2)
        k = n - k;

    long long int result = 1;
    for(long long int i = k + 1; i <= n; i++) {
        long long int temp = (result * k) % MAX;
        temp = (temp * pow(i - k, MAX - 2, MAX)) % MAX;
        result = (result + temp) % MAX;
    }

    std::cout << result << std::endl;
    
    return 0;
}

long long int pow(long long int base, long long int exp, long long int mod)
{
    long long int result = 1;

    for(; exp; exp >>= 1) {
        if(exp & 1)
            result = (result * base) % mod;

        base = (base * base) % mod;
    }

    return result;
}
