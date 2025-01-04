#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<int> numbers, forward;
    int total = 0;
    for(int i = 0; i < n; i++) {
        int temp = 0;
        std::cin >> temp;

        numbers.push_back(temp);
        total += temp;
        forward.push_back(total);
    }
    
    std::vector<int> backward;
    backward.push_back(forward.back());
    for(int i = 1; i < n; i++)
        backward.push_back(backward.back() - numbers[i - 1]);

    int i = 0, j = 0;
    for(int k = 0; k < m; k++) {
        int sub = total;
        std::cin >> i >> j;
        
        if(i != 1)
            sub -= forward[i - 2];
        if(j != n)
            sub -= backward[j];

        std::cout << sub << '\n';
    }

    std::cout << std::flush;

    return 0;
}
