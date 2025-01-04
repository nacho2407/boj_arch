#include <algorithm>
#include <iostream>
#include <vector>

typedef struct {
    int first;
    int second;
} line;

int main(void)
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<line> lines(n, line());
    for(int i = 0; i < n; i++)
        std::cin >> lines[i].first >> lines[i].second;

    std::sort(lines.begin(), lines.end(), [](line a, line b) -> int { return a.first < b.first; });

    std::vector<int> mem(n, 1);

    int max = 0;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(lines[i].second > lines[j].second) {
                if(mem[j] + 1 > mem[i])
                    mem[i] = mem[j] + 1;

                if(mem[i] > max)
                    max = mem[i];
            }
        }
    }

    std::cout << n - max << std::endl;

    return 0;
}
