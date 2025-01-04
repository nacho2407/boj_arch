#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::vector<int> times;

    for(int i = 0; i < n; i++) {
        int temp = 0;
        std::cin >> temp;
        times.push_back(temp);
    }

    sort(times.begin(), times.end());

    int sum = 0;
    int res = 0;
    for(int i = 0; i < n; i++) {
        sum += times[i];
        res += sum;
    }

    std::cout << res << std::endl;

    return 0;
}
