#include <iostream>
#include <vector>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::vector<std::vector<int>> costs(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            int temp = 0;
            std::cin >> temp;
            costs[i].push_back(temp);
        }
    }

    std::vector<int> mem(costs[0]);

    for(int i = 1; i < n; i++) {
        std::vector<int> temp(3);

        temp[0] = costs[i][0] + (mem[1] > mem[2] ? mem[2] : mem[1]);
        temp[1] = costs[i][1] + (mem[0] > mem[2] ? mem[2] : mem[0]);
        temp[2] = costs[i][2] + (mem[0] > mem[1] ? mem[1] : mem[0]);

        mem = std::vector<int>(temp);
    }

    int min = mem[0];
    for(int i = 1; i < 3; i++) {
        if(min > mem[i])
            min = mem[i];
    }

    std::cout << min << std::endl;

    return 0;
}
