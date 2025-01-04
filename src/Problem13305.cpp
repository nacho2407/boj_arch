#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0;
    std::cin >> n;

    std::vector<long long int> distance(n - 1);
    std::vector<long long int> price(n);

    for(int i = 0; i < n - 1; i++)
        std::cin >> distance[i];

    for(int i = 0; i < n; i++)
        std::cin >> price[i];

    long long int current_price = price[0];
    long long int sum = current_price * distance[0];

    for(int i = 1; i < n - 1; i++) {
        if(price[i] < current_price)
            current_price = price[i];

        sum += current_price * distance[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
