#include <iostream>
#include <vector>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int k, n;
        std::cin  >> k >> n;

        std::vector<int> lan(k);
        long long int total = 0;
        for(int i = 0; i < k; i++) {
                std::cin >> lan[i];
                total += lan[i];
        }

        long long int max = total / n;
        long long int min = total / (n + k - 1);
        long long int length = (min + max) / 2;
        for(; length >= min && length < max && max - min > 1; ) {
                long long int count = 0;
                for(int i = 0; i < k; i++)
                        count += lan[i] / length;

                if(count >= n) {
                        min = length;
                        length = (min + max) / 2;
                } else {
                        max = length - 1;
                        length = (min + max) / 2;
                }
        }

        if(max - min == 1) {
                long long int count = 0;
                for(int i = 0; i < k; i++)
                        count += lan[i] / max;

                if(count >= n)
                        length = max;
                else
                        length = min;
        }

        std::cout << length << std::endl;

        return 0;
}
