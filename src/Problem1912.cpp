#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n = 0;
    std::cin >> n;

    std::vector<long long int> numbers;
    long long int max = -1000l;

    for(int i = 0; i < n; i++) {
        long long int number = 0;
        std::cin >> number;
        numbers.push_back(number);

        if(number > max)
            max = number;
    }

    long long int mem = numbers[0];

    for(int i = 1; i < n; i++) {
        if(mem < 0)
            mem = numbers[i];
        else
            mem += numbers[i];

        if(mem > max)
            max = mem;
    }

    std::cout << max << std::endl;
        
    return 0;
}
