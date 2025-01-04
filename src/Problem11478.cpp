#include <iostream>
#include <string>
#include <unordered_set>

int main(void)
{
    std::string s;
    std::cin >> s;

    std::unordered_set<std::string> sub_string;

    for(int i = 1; i <= s.size(); i++)
    {
        for(int j = 0; j <= s.size() - i; j++)
        {
            sub_string.insert(s.substr(j, i));
        }
    }

    std::cout << sub_string.size() << std::endl;

    return 0;
}
