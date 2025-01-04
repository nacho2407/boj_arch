#include <iostream>
#include <vector>

void calculate(std::vector<std::vector<int>> &paper, int x, int y, int size);

int minus = 0;
int plus = 0;
int zero = 0;

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
            plus++;
        else if(paper[0][0] == 0)
            zero++;
        else
            minus++;
    } else {
        calculate(paper, 0, 0, n / 3);
        calculate(paper, n / 3, 0, n / 3);
        calculate(paper, n / 3 * 2, 0, n / 3);

        calculate(paper, 0, n / 3, n / 3);
        calculate(paper, n / 3, n / 3, n / 3);
        calculate(paper, n / 3 * 2, n / 3, n / 3);

        calculate(paper, 0, n / 3 * 2, n / 3);
        calculate(paper, n / 3, n / 3 * 2, n / 3);
        calculate(paper, n / 3 * 2, n / 3 * 2, n / 3);
    }

    std::cout << minus << '\n' << zero << '\n' << plus << std::endl;

    return 0;
}

void calculate(std::vector<std::vector<int>> &paper, int x, int y, int size)
{
    int flag = 0;
    for(int i = y; i < y + size; i++) {
        for(int j = x; j < x + size; j++) {
            if(paper[i][j] != paper[y][x])
                flag = 1;
        }
    }

    if(flag == 0) {
        if(paper[y][x] == 1)
            plus++;
        else if(paper[y][x] == 0)
            zero++;
        else
            minus++;
    } else {
        calculate(paper, x, y, size / 3);
        calculate(paper, x + size / 3, y, size / 3);
        calculate(paper, x + size / 3 * 2, y, size / 3);

        calculate(paper, x, y + size / 3, size / 3);
        calculate(paper, x + size / 3, y + size / 3, size / 3);
        calculate(paper, x + size / 3 * 2, y + size / 3, size / 3);

        calculate(paper, x, y + size / 3 * 2, size / 3);
        calculate(paper, x + size / 3, y + size / 3 * 2, size / 3);
        calculate(paper, x + size / 3 * 2, y + size / 3 * 2, size / 3);
    }
}
