#include <deque>
#include <iostream>
#include <string>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0;
    std::cin >> n;

    std::deque<int> queue;

    for(int i = 0; i < n; i++)
    {
        std::string temp;
        std::cin >> temp;

        if(temp == "push")
        {
            int number = 0;
            std::cin >> number;

            queue.push_back(number);
        }
        else if(temp == "pop")
        {
            if(queue.empty())
            {
                std::cout << "-1\n";
            }
            else
            {
                std::cout << queue.front() << '\n';
                queue.pop_front();
            }
        }
        else if(temp == "size")
        {
            std::cout << queue.size() << '\n';
        }
        else if(temp == "empty")
        {
            if(queue.empty())
            {
                std::cout << "1\n";
            }
            else
            {
                std::cout << "0\n";
            }
        }
        else if(temp == "front")
        {
            if(queue.empty())
            {
                std::cout << "-1\n";
            }
            else
            {
                std::cout << queue.front() << '\n';
            }
        }
        else
        {
            if(queue.empty())
            {
                std::cout << "-1\n";
            }
            else
            {
                std::cout << queue.back() << '\n';
            }
        }
    }

    std::cout << std::flush;

    return 0;
}
