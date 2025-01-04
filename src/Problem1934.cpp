#include <iostream>

int main(void)
{
    int t = 0;
    std::cin >> t;

    int a = 0, b = 0;
    int temp = 0;
    for(int i = 0; i < t; i++)
    {
        std::cin >> a >> b;

        if(a < b)
        {
            temp = a;
        }
        else
        {
            temp = b;
        }

        for(; a % temp != 0 || b % temp != 0; temp--);

        if(temp == 0)
        {
            temp = a * b;
        }
        else
        {
            temp = a * b / temp;
        }

        std::cout << temp << std::endl;
    }

    return 0;
}
