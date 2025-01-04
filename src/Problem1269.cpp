#include <iostream>
#include <unordered_set>

int main(void)
{
    int size_a = 0, size_b = 0;
    std::cin >> size_a >> size_b;

    std::unordered_set<int> a;
    std::unordered_set<int> b;
    int count = 0;

    int temp = 0;
    for(int i = 0; i < size_a; i++)
    {
        std::cin >> temp;
        a.insert(temp);
    }

    for(int i = 0; i < size_b; i++)
    {
        std::cin >> temp;
        b.insert(temp);

        if(a.find(temp) == a.end())
        {
            count++;
        }
    }

    for(int element : a)
    {
        if(b.find(element) == b.end())
        {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
