#include <iostream>
#include <vector>

#define MAX ((long long int) 1000000007)

void mat_mul(std::vector<std::vector<int>> &first, std::vector<std::vector<int>> second, int n);

int main(void)
{
    long long int n;
    std::cin >> n;

    std::vector<std::vector<int>> fib(2, std::vector<int>(2, 0));
    fib[0][0] = 1;
    fib[0][1] = 1;
    fib[1][0] = 1;

    std::vector<std::vector<int>> res(2, std::vector<int>(2,0));
    res[0][0] = 1;
    res[1][1] = 1;

    n--;

    for(; n; n >>= 1) {
        if(n & 1)
            mat_mul(res, fib, 2);

        mat_mul(fib, fib, 2);
    }

    std::cout << res[0][0] << std::endl;

    return 0;
}

void mat_mul(std::vector<std::vector<int>> &first, std::vector<std::vector<int>> second, int n)
{
    std::vector<std::vector<int>> temp = first;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int res = 0;
            for(int k = 0; k < n; k++) {
                res += ((long long int) temp[i][k] * second[k][j]) % MAX;
                res %= MAX;
            }

            first[i][j] = res;
        }
    }
}
