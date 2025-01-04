#include <iostream>
#include <vector>

typedef struct matrix
{
        int row;
        int col;
        long long int sum;
} matrix;

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;

        std::vector<std::vector<matrix>> mats(n, std::vector<matrix>());

        for(int i = 0; i < n; i++) {
                int r, c;
                std::cin >> r >> c;
                mats[0].push_back(matrix{r, c, 0});
        }

        for(int j = 1; j < n; j++) {
                for(int k = 0; k < n - j; k++) {
                        mats[j].push_back(matrix{0, 0, 0});

                        for(int l = 0; l < j; l++) {
                                long long int temp = mats[l][k].sum + mats[j - l - 1][k + l + 1].sum + (long long int) mats[l][k].row * mats[l][k].col * mats[j - l - 1][k + l + 1].col;

                                if(mats[j][k].sum == 0 || mats[j][k].sum > temp) {
                                        mats[j][k].row = mats[l][k].row;
                                        mats[j][k].col = mats[j - l - 1][k + l + 1].col;
                                        mats[j][k].sum = temp;
                                }
                        }
                }
        }

        std::cout << mats[n - 1][0].sum << std::endl;

        return 0;
}
