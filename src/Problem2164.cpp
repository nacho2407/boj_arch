#include <deque>
#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::deque<int> cards;

    for(int i = 1; i <= n; i++)
    {
        cards.push_back(i);
    }

    for(; cards.size() != 1; )
    {
        cards.pop_front();
        cards.push_back(cards.front());
        cards.pop_front();
    }

    std::cout << cards.front() << std::endl;

    return 0;
}
