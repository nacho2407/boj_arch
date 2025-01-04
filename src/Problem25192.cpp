#include <iostream>
#include <string>
#include <unordered_set>

int main(void)
{
    int n = 0;
    std::cin >> n;

    auto chat = new std::unordered_set<std::string>;

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;

        if(s == "ENTER")
        {
            delete chat;
            chat = new std::unordered_set<std::string>;
        }
        else if(chat->find(s) == chat->end())
        {
            count++;
            chat->insert(s);
        }
    }

    std::cout << count << std::endl;

    delete chat;

    return 0;
}
