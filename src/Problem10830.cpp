#include <iostream>
#include <vector>

#define MAX ((int) 1000)

void mat_mul(std::vector<std::vector<int>> &first, std::vector<std::vector<int>> second, int n);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    long long int b;
    std::cin >> n >> b;

    std::vector<std::vector<int>> a(n, std::vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            std::cin >> a[i][j];
    }

    std::vector<std::vector<int>> res(n, std::vector<int>(n, 0));
    for(int i = 0; i < n; i++)
        res[i][i] = 1;

    for(; b; b >>= 1) {
        if(b & 1)
            mat_mul(res, a, n);

        mat_mul(a, a, n);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            std::cout << res[i][j] << ' ';

        std::cout << '\n';
    }

    std::cout << std::flush;

    return 0;
}

void mat_mul(std::vector<std::vector<int>> &first, std::vector<std::vector<int>> second, int n)
{
    std::vector<std::vector<int>> temp = first;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int res = 0;
            for(int k = 0; k < n; k++) {
                res += (temp[i][k] * second[k][j]) % MAX;
                res %= MAX;
            }

            first[i][j] = res;
        }
    }
}
