#include <iostream>
#include <cmath>

int main(void)
{
    int num = 0;
    std::cin >> num;

    unsigned int n = 0, k = 0;
    for(int i = 0; i < num; i++)
    {
        std::cin >> n;

        for(unsigned int j = n; ; j++)
        {
            if(j == 1 || j == 2)
            {
                std::cout << 2 << std::endl;
                break;
            }
            else if(j % 2 == 0)
            {
                continue;
            }

            for(k = 3; k <= sqrt(j); k += 2)
            {
                if(j % k == 0)
                {
                    break;
                }
            }

            if(k > sqrt(j))
            {
                std::cout << j << std::endl;
                break;
            }
        }
    }

    return 0;
}
