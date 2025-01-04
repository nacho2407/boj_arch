#include <iostream>
#include <vector>

typedef struct file
{
        long long int sum;
        int size;
} file;

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int t;
        std::cin >> t;

        for(int i = 0; i < t; i++) {
                int k;
                std::cin >> k;

                std::vector<std::vector<file>> files(k, std::vector<file>());
                for(int j = 0; j < k; j++) {
                        int temp;
                        std::cin >> temp;
                        files[0].push_back(file{0, temp});
                }

                for(int l = 1; l < k; l++) {
                        for(int m = 0; m < k - l; m++) {
                                files[l].push_back(file{0, files[0][m].size + files[l - 1][m + 1].size});

                                for(int n = 0; n < l; n++) {
                                        int temp = files[n][m].sum + files[l - n - 1][m + n + 1].sum + files[n][m].size + files[l - n - 1][m + n + 1].size;

                                        if(files[l][m].sum == 0 || files[l][m].sum > temp)
                                                files[l][m].sum = temp;
                                }
                        }
                }

                std::cout << files[k - 1][0].sum << '\n';
        }

        std::cout << std::flush;

        return 0;
}
