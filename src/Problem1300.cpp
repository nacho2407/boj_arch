#include <iostream>

int main(void)
{
        int n, k;
        std::cin >> n >> k;

        long long int min = 1;
        long long int max = (long long int) n * n;
        long long int est = (min + max) / 2;
        for(; min <= est && est < max; ) {
                long long int cnt = 0;
                long long int corr = 0;
                for(int i = 1; i <= n; i++) {
                        int temp = est / i;
                        if(temp > n)
                                temp = n;
                        else if(est % i == 0)
                                corr++;

                        cnt += temp;
                }

                if(cnt == k) {
                        if(corr == 0) {
                                est--;
                        } else
                                break;
                } else if(cnt < k) {
                        min = est;
                        est = (min + max) / 2;
                        
                        if(min == est)
                                break;
                } else {
                        if(cnt - corr < k) {
                                max = est;

                                break;
                        }

                        max = est - 1;
                        est = (min + max) / 2;
                }
        }

        if(max - min == 1) {
                long long int cnt = 0;
                long long int corr = 0;
                for(int i = 1; i <= n; i++) {
                        int temp = max / i;
                        if(temp > n)
                                temp = n;
                        else if(max % i == 0)
                                corr++;

                        cnt += temp;
                }

                if(cnt <= k || cnt - corr < k)
                        est = max;
        }

        std::cout << est << std::endl;

        return 0;
}
