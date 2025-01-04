#include <iostream>
#include <unordered_set>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;

        std::unordered_set<int> set;

        for(int i = 0; i < n; i++) {
                int temp;
                std::cin >> temp;
                set.insert(temp);
        }

        int m;
        std::cin >> m;

        for(int i = 0; i < m; i++) {
                int temp;
                std::cin >> temp;

                if(set.find(temp) != set.end())
                        std::cout << 1;
                else
                        std::cout << 0;
                std::cout << '\n';
        }

        std::cout << std::flush;

        return 0;
}
