#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    std::string a;
    std::string b;
    std::cin >> a >> b;

    std::vector<std::vector<int>> mem(a.length() + 1, std::vector<int>(b.length() + 1, 0));

    for(int i = 1; i < a.length() + 1; i++) {
        for(int j = 1; j < b.length() + 1; j++) {
            if(a[i - 1] == b[j - 1])
                mem[i][j] = mem[i - 1][j - 1] + 1;
            else
                mem[i][j] = (mem[i - 1][j] > mem[i][j - 1]) ? mem[i - 1][j] : mem[i][j - 1];
        }
    }

    std::cout << mem[a.length()][b.length()] << std::endl;

    return 0;
}
