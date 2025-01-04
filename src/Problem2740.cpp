#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> a(n, std::vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            std::cin >> a[i][j];
    }

    int k;
    std::cin >> m >> k;

    std::vector<std::vector<int>> b(m, std::vector<int>(k));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++)
            std::cin >> b[i][j];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int temp = 0;
            
            for(int l = 0; l < m; l++)
                temp += a[i][l] * b[l][j];

            std::cout << temp << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}
