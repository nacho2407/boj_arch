#include <iostream>

bool is_promising(int x, int y, int *board);
void n_Queen(int n, int level, int *board);

int count = 0;

int main(void)
{
    int n = 0;
    std::cin >> n;

    int *board = new int[n] { 0 };

    n_Queen(n, 0, board);

    delete[] board;

    std::cout << count << std::endl;

    return 0;
}

bool is_promising(int x, int y, int *board)
{
    for(int i = 1; i < y; i++) {
        if(board[i] == x)
            return false;
        else if((x - board[i]) * (x - board[i]) == (y - i) * (y - i))
            return false;
    }

    return true;
}

void n_Queen(int n, int level, int *board)
{
    if(level == n - 1) {
        for(int i = 1; i <= n; i++) {
            if(is_promising(i, level + 1, board))
                count++;
        }
    } else {
        for(int i = 1; i <= n; i++) {
            if(is_promising(i, level + 1, board)) {
                board[level + 1] = i;
                n_Queen(n, level + 1, board);
                board[level + 1] = 0;
            }
        }
    }
}
