#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n, c;
        std::cin >> n >> c;

        std::vector<int> stall(n);
        for(int i = 0; i < n; i++)
                std::cin >> stall[i];

        std::sort(stall.begin(), stall.end());

        if(c == 2) {
                std::cout << stall[n - 1] - stall[0] << std::endl;

                return 0;
        }

        int min = 1;
        int max = (stall[n - 1] - stall[0]) / (c - 1);
        int width = (min + max) / 2;
        for(; min <= width && max > width; ) {
                int count = 0;
                int sum = 0;
                for(int i = 1; i < n; i++) {
                        sum += stall[i] - stall[i - 1];

                        if(sum >= width) {
                                count++;
                                sum = 0;
                        }
                }

                if(count >= c - 1) {
                        min = width;
                        width = (min + max) / 2;

                        if(max - min == 1) {
                                count = 0;
                                sum = 0;
                                for(int i = 1; i < n; i++) {
                                        sum += stall[i] - stall[i - 1];

                                        if(sum >= max) {
                                                count++;
                                                sum = 0;
                                        }
                                }

                                if(count < c - 1)
                                        max = min;

                                break;
                        }
                } else {
                        max = width - 1;
                        width = (min + max) / 2;
                }
        }

        std::cout << max << std::endl;

        return 0;
}
