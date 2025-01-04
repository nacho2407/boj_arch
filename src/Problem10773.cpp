#include <deque>
#include <iostream>

int main(void)
{
    int k = 0;
    std::cin >> k;
    
    std::deque<int> numbers;

    for(int i = 0; i < k; i++)
    {
        int temp = 0;
        std::cin >> temp;

        if(temp != 0)
        {
            numbers.push_back(temp);
        }
        else
        {
            numbers.pop_back();
        }
    }

    int sum = 0;
    for(int i : numbers)
    {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}
