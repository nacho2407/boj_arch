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
    std::vector<int> r_mem(n, 1);

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(numbers[i] > numbers[j]) {
                if(mem[j] + 1 > mem[i])
                    mem[i] = mem[j] + 1;
            }

            if(numbers[n - 1 - i] > numbers[n - 1 - j]) {
                if(r_mem[n - 1 - j] + 1 > r_mem[n - 1 - i])
                    r_mem[n - 1 - i] = r_mem[n - 1 - j] + 1;
            }
        }
    }

    int max = 0;
    for(int i = 0; i < n; i++) {
        mem[i] += r_mem[i];

        if(mem[i] > max)
            max = mem[i];
    }

    std::cout << max - 1 << std::endl;

    return 0;
}
