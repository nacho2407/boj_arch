#include <deque>
#include <iostream>
#include <string>

int main(void)
{
    int t = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        std::string temp;
        std::cin >> temp;

        std::deque<char> stack;
        int flag = 0;

        for(char c : temp)
        {
            if(c == '(')
            {
                stack.push_back(c);
            }
            else if(stack.empty())
            {
                flag = 1;
            }
            else
            {
                stack.pop_back();
            }
        }

        if(flag == 0 && stack.empty())
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    std::cout << std::flush;

    return 0;
}
