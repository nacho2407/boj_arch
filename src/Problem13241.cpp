#include <iostream>

int main(void)
{
    long long int a = 0l, b = 0l;
    std::cin >> a >> b;

    long long int temp = 0;

    if(a < b)
    {
        temp = a;
    }
    else
    {
        temp = b;
    }

    for(; a % temp != 0 || b % temp != 0; temp--);

    std::cout << a * b / temp << std::endl;

    return 0;
}
