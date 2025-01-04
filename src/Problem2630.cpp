#include <iostream>
#include <vector>

void calculate(std::vector<std::vector<int>> &paper, int x, int y, int size);

int white = 0;
int blue = 0;

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> paper(n, std::vector<int>(n));

    int flag = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> paper[i][j];

            if(paper[i][j] != paper[0][0])
                flag = 1;
        }
    }

    if(flag == 0) {
        if(paper[0][0] == 1)
            blue++;
        else
            white++;
    } else {
        calculate(paper, 0, 0, n / 2);
        calculate(paper, n / 2, 0, n / 2);
        calculate(paper, 0, n / 2, n / 2);
        calculate(paper, n / 2, n / 2, n / 2);
    }

    std::cout << white << '\n' << blue << std::endl;

    return 0;
}

void calculate(std::vector<std::vector<int>> &paper, int x, int y, int size)
{
    int flag = 0;
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(paper[j][i] != paper[y][x])
                flag = 1;
        }
    }

    if(flag == 0) {
        if(paper[y][x] == 1)
            blue++;
        else
            white++;
    } else {
        calculate(paper, x, y, size / 2);
        calculate(paper, x + size / 2, y, size / 2);
        calculate(paper, x, y + size / 2, size / 2);
        calculate(paper, x + size / 2, y + size / 2, size / 2);
    }
}
