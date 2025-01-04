#include <iostream>
#include <string>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++) {
        std::string word;
        std::cin >> word;

        int j = 0;
        for(; j < word.length() / 2; j++) {
            if(word[j] != word[word.length() - 1 - j])
                break;
        }

        if(j >= word.length() / 2)
            std::cout << 1;
        else
            std::cout << 0;

        std::cout << ' ' << j + 1 << '\n';
    }

    std::cout << std::flush;

    return 0;
}
