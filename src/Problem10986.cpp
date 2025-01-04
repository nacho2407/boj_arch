#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(0);

    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<long long int> remain(m, 0);

    int sum = 0;
    int number = 0;
    std::cin >> number;
    sum = number % m;

    remain[sum]++;

    for(int i = 1; i < n; i++) {
        std::cin >> number;
        sum = (sum + number % m) % m;

        remain[sum]++;
    }

    long long int res = remain[0];

    for(int i = 0; i < m; i++) {
        if(remain[i] >= 2)
            res += remain[i] * (remain[i] - 1) / 2;
    }

    std::cout << res << std::endl;

    return 0;
}
