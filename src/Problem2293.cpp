#include <iostream>
#include <vector>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n, k;
        std::cin >> n >> k;

        std::vector<int> cases;
        cases.push_back(1);

        int coin;
        std::cin >> coin;
        k++;
                
        for(int i = 1; i < k; i++) {
                if(i >= coin && i % coin == 0)
                        cases.push_back(1);
                else
                        cases.push_back(0);
        }

        for(int i = 1; i < n; i++) {
                std::cin >> coin;

                for(int j = 1; j < k; j++) {
                        if(j >= coin)
                                cases[j] += cases[j - coin];
                }
        }

        std::cout << cases[k - 1] << std::endl;

        return 0;
}
