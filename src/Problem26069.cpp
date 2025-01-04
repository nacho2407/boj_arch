#include <iostream>
#include <string>
#include <unordered_set>

int main(void)
{
    const static std::string FIRST_DANCER = "ChongChong";
    int n = 0;
    std::cin >> n;

    std::unordered_set<std::string> dancing;
    
    dancing.insert(FIRST_DANCER);

    for(int i = 0; i < n; i++)
    {
        std::string a, b;
        std::cin >> a >> b;

        if((dancing.find(a) != dancing.end()) || (dancing.find(b) != dancing.end()))
        {
            dancing.insert(a);
            dancing.insert(b);
        }
    }

    std::cout << dancing.size() << std::endl;

    return 0;
}
