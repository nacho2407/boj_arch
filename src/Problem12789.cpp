#include <deque>
#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::deque<int> line;

    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;

        line.push_back(temp);
    }

    std::deque<int> temp_area;

    int turn = 1;
    for(; !line.empty() || !temp_area.empty(); )
    {
        if(!temp_area.empty() && temp_area.back() == turn)
        {
            temp_area.pop_back();
            turn++;
        }
        else if(line.empty())
        {
            break;
        }
        else
        {
            for(; !line.empty() && line.front() != turn; )
            {
                temp_area.push_back(line.front());
                line.pop_front();
            }

            if(!line.empty())
            {
                line.pop_front();
                turn++;
            }
        }
    }

    if(turn == n + 1)
    {
        std::cout << "Nice" << std::endl;
    }
    else
    {
        std::cout << "Sad" << std::endl;
    }

    return 0;
}
