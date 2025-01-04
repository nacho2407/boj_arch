#include <iostream>
#include <vector>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n, m;
        std::cin >> n >> m;

        std::vector<int> trees(n);
        int max = 0;
        int shortest = 1000000000;
        for(int i = 0; i < n; i++) {
                std::cin >> trees[i];

                if(trees[i] > max)
                        max = trees[i];

                if(trees[i] < shortest)
                        shortest = trees[i];
        }

        int min = (max - shortest) > m ? shortest : 0;

        int height = ((long long int) max + min) / 2;
        for(; min <= height && max > height; ) {
                long long int lumber = 0;
                for(int i = 0; i < n; i++) {
                        if(trees[i] > height)
                                lumber += trees[i] - height;
                }

                if(lumber >= m) {
                        min = height;
                        height = ((long long int) max + min) / 2;

                        if(min == height)
                                break;
                } else {
                        max = height - 1;
                        height = ((long long int) max + min) / 2;
                }
        }

        if(max - min >= 1) {
                long long int lumber = 0;
                for(int i = 0; i < n; i++) {
                        if(trees[i] > height)
                                lumber += trees[i] - max;
                }

                if(lumber >= m)
                        height = max;
                else
                        height = min;
        }

        std::cout << height << std::endl;

        return 0;
}