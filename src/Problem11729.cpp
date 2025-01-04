#include <iostream>
#include <vector>

void hanoi(int n, int from, int to, int by, std::vector<std::pair<int, int>>& res, int& cnt);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0;
    std::cin >> n;

    std::vector<std::pair<int, int>> res;
    int cnt = 0;

    hanoi(n, 1, 3, 2, res, cnt);

    std::cout << cnt << '\n';
    for(int i = 0; i < res.size(); i++)
        std::cout << res[i].first << ' ' << res[i].second << '\n';

    std::cout << std::flush;

    return 0;
}

void hanoi(int n, int from, int to, int by, std::vector<std::pair<int, int>>& res, int& cnt)
{
    if(n == 1) {
        res.push_back(std::pair<int, int>(from, to));
        cnt++;

        return;
    }

    hanoi(n - 1, from, by, to, res, cnt);
    hanoi(1, from, to, by, res, cnt);
    hanoi(n - 1, by, to, from, res, cnt);
}
