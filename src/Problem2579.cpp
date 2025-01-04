#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(0);

    int n = 0;
    std::cin >> n;

    std::vector<std::vector<int>> mem(2);

    mem[0].push_back(0);
    mem[1].push_back(0);

    int step = 0;
    std::cin >> step;
    mem[0].push_back(step);
    mem[1].push_back(step);

    for(int i = 2; i < n + 1; i++) {
        std::cin >> step;

        mem[0].push_back(step + mem[1][i - 1]);
        mem[1].push_back(step + (mem[0][i - 2] > mem[1][i - 2] ? mem[0][i - 2] : mem[1][i - 2]));
    }

    std::cout << (mem[0][n] > mem[1][n] ? mem[0][n] : mem[1][n]) << std::endl;

    return 0;
}
