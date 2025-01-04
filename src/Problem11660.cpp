#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<std::vector<int>> sum(n, std::vector<int>(n, 0));
    
    std::cin >> sum[0][0];

    for(int i = 1; i < n; i++) {
        std::cin >> sum[0][i];
        sum[0][i] += sum[0][i - 1];
    }

    for(int i = 1; i < n; i++) {
        std::cin >> sum[i][0];
        
        int line_sum = sum[i][0];

        sum[i][0] += sum[i - 1][0];

        for(int j = 1; j < n; j++) {
            std::cin >> sum[i][j];

            line_sum += sum[i][j];
            
            sum[i][j] = line_sum + sum[i - 1][j];
        }
    }

    for(int i = 0; i < m; i++) {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        std::cin >> x1 >> y1 >> x2 >> y2;

        int res = sum[x2 - 1][y2 - 1];
        if(x1 != 1)
            res -= sum[x1- 2][y2 - 1];
        if(y1 != 1)
            res -= sum[x2 - 1][y1 - 2];
        if(x1 != 1 && y1 != 1)
            res += sum[x1 - 2][y1 - 2];

        std::cout << res << '\n';
    }

    std::cout << std::flush;
    
    return 0;
}
