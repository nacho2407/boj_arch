#include <iostream>

int bit(int n);

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::cout << bit(n) << std::endl;

    return 0;
}

int bit(int n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;

    int mem1 = 1;
    int mem2 = 2;

    for(int i = 3; i <= n; i++) {
        int temp = (mem1 + mem2) % 15746;
        mem1 = mem2;
        mem2 = temp;
    }

    return mem2;
}

