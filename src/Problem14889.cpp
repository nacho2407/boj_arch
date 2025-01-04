#include <iostream>

void solve(int n, int level, int last, int *team, int **stats, int &min);

int main(void)
{
    int n = 0;
    std::cin >> n;
    int *team = new int[n] { 0 };

    int **stats = new int*[n];
    for(int i = 0; i < n; i++) {
        stats[i] = new int[n];
        
        for(int j = 0; j < n; j++)
            std::cin >> stats[i][j];
    }

    int min = -1;

    solve(n, 0, 0, team, stats, min);

    std::cout << min << std::endl;

    for(int i = 0; i < n; i++)
        delete[] stats[i];
    delete[] stats;
    
    delete[] team;

    return 0;
}

inline int abs(int n)
{
    return (n > 0) ? n : -n;
}

inline void calculate(int n, int *team, int **stats, int &min)
{
    int first_stat = 0;
    int second_stat = 0;

    for(int i = 0; i < n; i++) {
        if(team[i] == 1) {
            for(int j = i; j < n; j++) {
                if(team[j] == 1)
                    first_stat += stats[i][j] + stats[j][i];
            }
        } else {
            for(int j = i; j < n; j++) {
                if(team[j] == 0)
                    second_stat += stats[i][j] + stats[j][i];
            }
        }
    }

    if(min == -1 || min > abs(first_stat - second_stat))
        min = abs(first_stat - second_stat);
}

void solve(int n, int level, int last, int *team, int **stats, int &min)
{
    if(level == n / 2) {
        calculate(n, team, stats, min);
    } else {
        for(int i = last; i < n; i++) {
            if(team[i] != 1) {
                team[i] = 1;

                solve(n, level + 1, i + 1, team, stats, min);

                team[i] = 0;
            }
        }
    }
}
