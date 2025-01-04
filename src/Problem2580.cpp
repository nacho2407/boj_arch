#include <iostream>
#include <vector>

#define MAX 9

bool solve(int level, int (&sudoku)[MAX][MAX], std::vector<std::pair<int, int>> &holes);

const int range_max[9] = {2, 2, 2, 5, 5, 5, 8, 8, 8};

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int sudoku[MAX][MAX]; // (y, x) Order
    std::vector<std::pair<int, int>> holes;

    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            std::cin >> sudoku[i][j];

            if(sudoku[i][j] == 0)
                holes.push_back(std::pair<int, int>(j, i));
        }
    }

    solve(1, sudoku, holes);

    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            std::cout << sudoku[i][j];

            if(j != MAX - 1)
                std::cout << ' ';
        }

        std::cout << '\n';
    }

    std::cout << std::flush;

    return 0;
}

bool promising(int x, int y, int value, int (&sudoku)[MAX][MAX])
{
    for(int i = 0; i < MAX; i++) {
        if(sudoku[y][i] == value)
            return false;
    }

    for(int i = 0; i < MAX; i++) {
        if(sudoku[i][x] == value)
            return false;
    }

    for(int i = range_max[y] - 2; i <= range_max[y]; i++) {
        for(int j = range_max[x] - 2; j <= range_max[x]; j++) {
            if(sudoku[i][j] == value)
                return false;
        }
    }

    return true;
}

bool solve(int level, int (&sudoku)[MAX][MAX], std::vector<std::pair<int, int>> &holes)
{
    auto current = holes[level - 1];

    if(level == holes.size()) {
        for(int i = 1; i <= MAX; i++) {
            if(promising(current.first, current.second, i, sudoku)) {
                sudoku[current.second][current.first] = i;

                return true;
            }
        }
    } else {
        for(int i = 1; i <= MAX; i++) {
            if(promising(current.first, current.second, i, sudoku)) {
                sudoku[current.second][current.first] = i;

                if(solve(level + 1, sudoku, holes))
                    return true;
                else
                    sudoku[current.second][current.first] = 0;
            }
        }
    }

    return false;
}
