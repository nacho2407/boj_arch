#include <iostream>
#include <vector>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;

        std::vector<int> seq(n);
        for(int i = 0; i < n; i++)
                std::cin >> seq[i];

        std::vector<int> lis;
        lis.push_back(seq[0]);
        
        for(int i = 1; i < n; i++) {
                if(seq[i] >= lis[lis.size() - 1]) {
                        if(seq[i] != lis[lis.size() - 1])
                                lis.push_back(seq[i]);
                        
                        continue;
                } else {
                        int min = 0;
                        int max = lis.size() - 1;
                        for(int j = (min + max) / 2; min <= j && j < max; j = (min + max) / 2) {
                                if(lis[j] >= seq[i])
                                        max = j;
                                else
                                        min = j + 1;
                        }

                        lis[max] = seq[i];
                }
        }

        std::cout << lis.size() << std::endl;

        return 0;
}