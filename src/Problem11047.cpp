#include <iostream>
#include <vector>

int main(void)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<int> coins(n, 0);
    for(int i = 0; i < n; i++)
        std::cin >> coins[i];

    int res = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(coins[i] <= k) {
            res += k / coins[i];
            k %= coins[i];
        }
    }

    std::cout << res << std::endl;

    return 0;
}
