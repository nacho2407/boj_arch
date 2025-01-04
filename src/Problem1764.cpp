#include <iostream>
#include <string>
#include <set>

int main(void)
{
    int n = 0, m = 0;
    std::cin >> n >> m;

    std::set<std::string> never_heard;
    std::set<std::string> never_heard_and_seen;

    std::string temp;
    for(int i = 0; i < n; i++)
    {
        std::cin >> temp;
        never_heard.insert(temp);
    }

    for(int i = 0; i < m; i++)
    {
        std::cin >> temp;
        if(never_heard.find(temp) != never_heard.end())
        {
            never_heard_and_seen.insert(temp);
        }
    }

    std::cout << never_heard_and_seen.size() << '\n';
    for(std::string name : never_heard_and_seen)
    {
        std::cout << name << std::endl;
    }

    return 0;
}
