#include <deque>
#include <iostream>
#include <vector>

#define MAX 1000000000

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::deque<std::vector<int>> mem(2, std::vector<int>(10, 1));
    mem[0][0] = 0;

    for(int i = 1; i < n; i++) {
        mem[1][0] = mem[0][1];

        for(int j = 1; j < 9; j++)
            mem[1][j] = (mem[0][j - 1] % MAX + mem[0][j + 1] % MAX) % MAX;

        mem[1][9] = mem[0][8];

        mem.pop_front();
        mem.push_back(std::vector<int>(10));
    }

    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum = (sum + mem[0][i]) % MAX;
    }

    std::cout << sum << std::endl;

    return 0;
}
