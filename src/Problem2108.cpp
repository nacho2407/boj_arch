#include <cmath>
#include <iostream>
#include <set>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::multiset<int> numbers;

    double sum = 0;
    int* frequency = new int[8001] { 0 };

    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;
        numbers.insert(temp);

        sum += temp;

        frequency[temp + 4000]++;
    }

    auto iterator = numbers.begin();
    for(int i = 0; i < n / 2; i++)
    {
        iterator++;
    }
    int median = *iterator;

    int most_frequent = 0, flag = 0;
    for(int i = 1; i < 8001; i++)
    {
        if(frequency[i] > frequency[most_frequent])
        {
            most_frequent = i;
            flag = 0;
        }
        else if(flag == 0 && frequency[i] == frequency[most_frequent])
        {
            most_frequent = i;
            flag = 1;
        }
    }

    std::cout << floor(sum / n + 0.5) << '\n'
        << median << '\n'
        << most_frequent - 4000 << '\n'
        << *numbers.rbegin() - *numbers.begin() << std::endl;

    delete[] frequency;

    return 0;
}
