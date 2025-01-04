#include <iostream>
#include <string>
#include <vector>

// x와 y는 찍을 사각형의 좌측 최상단 좌표
void print_star(int n, int x, int y, std::vector<std::string>& star, int flag);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0;
    std::cin >> n;

    std::vector<std::string> star;
    for(int i = 0; i < n; i++)
        star.push_back(std::string());

    print_star(n, 0, 0, star, 1);

    for(int i = 0; i < n; i++)
        std::cout << star[i] << '\n';

    std::cout << std::flush;

    return 0;
}

void print_star(int n, int x, int y, std::vector<std::string>& star, int flag)
{
    if(n == 1) {
        if(flag == 1)
            star[x].append("*");
        else
            star[x].append(" ");

        return;
    }

    print_star(n / 3, x, y, star, flag);
    print_star(n / 3, x + n / 3, y, star, flag);
    print_star(n / 3, x + (n / 3 * 2), y, star, flag);

    print_star(n / 3, x, y + n / 3, star, flag);
    print_star(n / 3, x + n / 3, y + n / 3, star, 0);
    print_star(n / 3, x + (n / 3 * 2), y + n / 3, star, flag);

    print_star(n / 3, x, y + (n / 3 * 2), star, flag);
    print_star(n / 3, x + n / 3, y + (n / 3 * 2), star, flag);
    print_star(n / 3, x + (n / 3 * 2), y + (n / 3 * 2), star, flag);
}
