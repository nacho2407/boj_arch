#include <iostream>
#include <vector>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;

        int sum = 0;
        std::vector<int> weight(n);
        for(int i = 0; i < n; i++) {
                std::cin >> weight[i];
                sum += weight[i];
        }

        std::vector<std::vector<int>> mem(n, std::vector<int>(sum + 1, 0));
        
        mem[0][0] = 1;
        mem[0][weight[0]] = 1;
        for(int i = 1; i < n; i++) {
                for(int j = 0; j < sum; j++) {
                        if(mem[i - 1][j]) {
                                mem[i][j] = 1;
                                mem[i][j + weight[i]] = 1;
                                if(j - weight[i] < 0)
                                        mem[i][weight[i] - j] = 1;
                                else
                                        mem[i][j - weight[i]] = 1;
                        }
                }
        }

        int t;
        std::cin >> t;
        for(int i = 0; i < t - 1; i++) {
                int marble;
                std::cin >> marble;

                if(marble <= sum && mem[n - 1][marble])
                        std::cout << "Y ";
                else
                        std::cout << "N ";
        }

        int marble;
        std::cin >> marble;

        if(marble <= sum && mem[n - 1][marble])
                std::cout << "Y\n";
        else
                std::cout << "N\n";

        std::cout << std::flush;

        return 0;
}
