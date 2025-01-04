#include <deque>
#include <iostream>
#include <string>

int main(void)
{
    std::string line;
    getline(std::cin, line);

    for(; line != "."; )
    {
        std::deque<int> stack;
        int flag = 0;
        for(char c : line)
        {
            if(c == '(' || c == '[')
            {
                stack.push_back(c);
            }
            else if(c == ')')
            {
                if(!stack.empty() && stack.back() == '(')
                {
                    stack.pop_back();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if(c == ']')
            {
                if(!stack.empty() && stack.back() == '[')
                {
                    stack.pop_back();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(stack.empty() && flag == 0)
        {
            std::cout << "yes\n";
        }
        else
        {
            std::cout << "no\n";
        }

        getline(std::cin, line);
    }

    std::cout << std::flush;

    return 0;
}
