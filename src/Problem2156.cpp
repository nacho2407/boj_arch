#include <iostream>
#include <vector>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::vector<std::vector<int>> mem(n, std::vector<int>(4, 0));

    std::cin >> mem[0][0];
    mem[0][1] = mem[0][0];

    for(int i = 1; i < n; i++) {
        int temp = 0;
        std::cin >> temp;

        mem[i][0] = temp + mem[i - 1][1];
        mem[i][1] = temp + (mem[i - 1][2] > mem[i - 1][3] ? mem[i - 1][2] : mem[i - 1][3]);
        mem[i][2] = mem[i - 1][0] > mem[i - 1][1] ? mem[i - 1][0] : mem[i - 1][1];
        mem[i][3] = mem[i - 1][2] > mem[i - 1][3] ? mem[i - 1][2] : mem[i - 1][3];
    }

    int max = 0;
    for(int i = 0; i < 4; i++) {
        if(max < mem[n - 1][i])
            max = mem[n - 1][i];
    }

    std::cout << max << std::endl;

    return 0;
}
