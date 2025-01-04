#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n = 0;
    std::cin >> n;

    std::vector<long long int> mem = {0, 1, 1, 1, 2, 2};

    for(int i = 0; i < n; i++) {
        int k = 0;
        std::cin >> k;

        if(k > mem.size() - 1) {
            for(int j = mem.size(); j <= k; j++)
                mem.push_back(mem[j - 1] + mem[j - 5]);
        }

        std::cout << mem[k] << '\n';
    }

    std::cout << std::flush;

    return 0;
}
