#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

bool compare(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
    if(a.second == b.second)
    {
        if(a.first.size() == b.first.size())
        {
            return a.first < b.first;
        }
        else
        {
            return a.first.size() > b.first.size();
        }
    }
    else
    {
        return a.second > b.second;
    }
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0, m = 0;
    std::cin >> n >> m;

    std::unordered_map<std::string, int> dictionary;

    for(int i = 0; i < n; i++)
    {
        std::string temp;
        std::cin >> temp;

        if(temp.size() >= m)
        {
            if(dictionary.end() == dictionary.find(temp))
            {
                dictionary.insert(std::pair<std::string, int>(temp, 0));
            }
            else
            {
                dictionary[temp]++;
            }
        }
    }

    std::vector<std::pair<std::string, int>> sorted_dictionary;

    std::copy(dictionary.begin(), dictionary.end(), std::back_inserter(sorted_dictionary));

    std::stable_sort(sorted_dictionary.begin(), sorted_dictionary.end(), compare);

    for(auto iterator : sorted_dictionary)
    {
        std::cout << iterator.first << '\n';
    }

    std::cout << std::flush;

    return 0;
}
