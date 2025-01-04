#include <iostream>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;

    int temp = 0;

    if(b < d)
    {
        temp = b;
    }
    else
    {
        temp = d;
    }

    for(; b % temp != 0 || d % temp != 0; temp--);

    int numerator = a * (d / temp) + c * (b / temp);
    int denominator = b * d / temp;

    if(numerator < denominator)
    {
        temp = numerator;
    }
    else
    {
        temp = denominator;
    }

    for(; numerator % temp != 0 || denominator % temp != 0; temp--);

    std::cout << numerator / temp << ' ' << denominator / temp << std::endl;

    return 0;
}
