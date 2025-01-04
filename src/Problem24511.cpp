#include <deque>
#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::deque<int> queuestack;

    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;
        queuestack.push_back(temp);
    }

    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;

        if(!queuestack.front())
        {
            queuestack.push_back(temp);
        }
        queuestack.pop_front();
    }

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;
        queuestack.push_front(temp);
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << queuestack.back() << ' ';
        queuestack.pop_back();
    }

    std::cout << std::flush;

    return 0;
}
