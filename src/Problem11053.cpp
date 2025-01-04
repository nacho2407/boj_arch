#include <iostream>
#include <vector>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::vector<int> numbers(n);
    for(int i = 0; i < n; i++)
        std::cin >> numbers[i];

    std::vector<int> mem(n, 1);
    int max = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(numbers[i] > numbers[j]) {
                if(mem[j] + 1 > mem[i]) {
                    mem[i] = mem[j] + 1;
                    
                    if(mem[i] > max)
                        max = mem[i];
                }
            }
        }
    }

    std::cout << max << std::endl;

    return 0;
}
