#include <deque>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::deque<int> qqueng; // 뀽

    int n = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;

        switch(temp)
        {
            case 1:
                std::cin >> temp;
                qqueng.push_front(temp);

                break;
            case 2:
                std::cin >> temp;
                qqueng.push_back(temp);

                break;
            case 3:
                if(qqueng.empty())
                {
                    std::cout << "-1\n";
                }
                else
                {
                    std::cout << qqueng.front() << '\n';
                    qqueng.pop_front();
                }

                break;
            case 4:
                if(qqueng.empty())
                {
                    std::cout << "-1\n";
                }
                else
                {
                    std::cout << qqueng.back() << '\n';
                    qqueng.pop_back();
                }

                break;
            case 5:
                std::cout << qqueng.size() << '\n';
                
                break;
            case 6:
                if(qqueng.empty())
                {
                    std::cout << "1\n";
                }
                else
                {
                    std::cout << "0\n";
                }

                break;
            case 7:
                if(qqueng.empty())
                {
                    std::cout << "-1\n";
                }
                else
                {
                    std::cout << qqueng.front() << '\n';
                }

                break;
            default:
                if(qqueng.empty())
                {
                    std::cout << "-1\n";
                }
                else
                {
                    std::cout << qqueng.back() << '\n';
                }
        }
    }

    std::cout << std::flush;
    
    return 0;
}
