#include <deque>
#include <iostream>

struct pair
{
    int index, value;
};

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::deque<pair> balloon;

    for(int i = 1; i <= n; i++)
    {
        int temp = 0;
        std::cin >> temp;

        balloon.push_back(pair {i, temp});
    }

    int temp = balloon.front().value;
    std::cout << balloon.front().index;
    balloon.pop_front();

    for(; !balloon.empty(); )
    {
        if(temp > 0)
        {
            for(int i = 1; i < temp; i++)
            {
                balloon.push_back(balloon.front());
                balloon.pop_front();
            }
        }
        else
        {
            for(int i = 0; i > temp; i--)
            {
                balloon.push_front(balloon.back());
                balloon.pop_back();
            }
        }

        temp = balloon.front().value;
        std::cout << ' ' << balloon.front().index;
        balloon.pop_front();
    }

    std::cout << std::endl;

    return 0;
}
