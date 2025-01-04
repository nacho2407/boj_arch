#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0, m = 0, k = 0;
    std::cin >> n >> m >> k;

    if(k == 1) {
        std::cout << 0 << std::flush;

        return 0;
    }

    std::vector<std::vector<int>> first_board(n, std::vector<int>(m, 0));
    std::vector<std::vector<int>> second_board(n, std::vector<int>(m, 0));

    int min = 2000 * 2000;

    char prev_first = 0;
    std::cin >> prev_first;
    char prev = prev_first;
    
    first_board[0][0] = 0;
    second_board[0][0] = 1;

    for(int i = 1; i < m; i++) {
        char curr = 0;
        std::cin >> curr;

        if(prev == curr) {
            first_board[0][i] = first_board[0][i - 1] + 1;
            second_board[0][i] = second_board[0][i - 1];

            if(curr == 'B')
                curr = 'W';
            else
                curr = 'B';
        } else {
            first_board[0][i] = first_board[0][i - 1];
            second_board[0][i] = second_board[0][i - 1] + 1;
        }

        prev = curr;
    }

    for(int i = 1; i < n; i++) {
        int first_sum = 0;
        int second_sum = 0;

        char curr = 0;
        std::cin >> curr;

        if(prev_first == curr) {
            first_sum++;

            if(curr == 'B')
                curr = 'W';
            else
                curr = 'B';
        } else
            second_sum++;

        first_board[i][0] = first_board[i - 1][0] + first_sum;
        second_board[i][0] = second_board[i - 1][0] + second_sum;

        prev = curr;

        prev_first = curr;

        for(int j = 1; j < m; j++) {
            std::cin >> curr;

            if(prev == curr) {
                first_sum++;

                if(curr == 'B')
                    curr = 'W';
                else
                    curr = 'B';
            } else
                second_sum++;

            first_board[i][j] = first_board[i - 1][j] + first_sum;
            second_board[i][j] = second_board[i - 1][j] + second_sum;

            prev = curr;

            if(k - 1 <= i && k - 1 <= j) {
                int first_min = first_board[i][j];
                int second_min = second_board[i][j];

                if(k - 1 != i) {
                    first_min -= first_board[i - k][j];
                    second_min -= second_board[i - k][j];
                }

                if(k - 1 != j) {
                    first_min -= first_board[i][j - k];
                    second_min -= second_board[i][j - k];
                }

                if(k - 1 != i && k - 1 != j) {
                    first_min += first_board[i - k][j - k];
                    second_min += second_board[i - k][j - k];
                }

                int temp_min = first_min < second_min ? first_min : second_min;

                if(temp_min < min)
                    min = temp_min;
            }
        }
    }

    std::cout << min << std::endl;

    return 0;
}
