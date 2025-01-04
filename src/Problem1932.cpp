#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> vector;

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n = 0;
    std::cin >> n;

    vector triangle(n), mem(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            int value = 0;
            std::cin >> value;
            triangle[i].push_back(value);
            mem[i].push_back(value);
        }
    }

    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++)
            mem[i][j] = (triangle[i][j] + (mem[i + 1][j] > mem[i + 1][j + 1] ? mem[i + 1][j] : mem[i + 1][j + 1]));
    }

    std::cout << mem[0][0] << std::endl;

    return 0;
}
