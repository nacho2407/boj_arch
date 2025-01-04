#include <iostream>
#include <vector>

int main(void)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<int> numbers(n);
    for(int i = 0; i < n; i++)
        std::cin >> numbers[i];

    int cur = 0, max = 0;
    for(int i = 0; i < k; i++)
        cur += numbers[i];
    max = cur;

    for(int i = k; i < n; i++) {
        cur -= numbers[i - k];
        cur += numbers[i];

        if(max < cur)
            max = cur;
    }

    std::cout << max << std::endl;

    return 0;
}
