#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::string s;
    std::cin >> s;

    std::vector<std::vector<int>> path('z' - 'a' + 1, std::vector<int>(s.length(), 0));

    path[s[0] - 'a'][0]++;

    for(int i = 0; i < 'z' - 'a' + 1; i++) {
        for(int j = 1; j < s.length(); j++) {
            path[i][j] = path[i][j - 1];

            if(s[j] - 'a' == i)
                path[i][j]++;
        }
    }

    int q = 0;
    std::cin >> q;

    for(int i = 0; i < q; i++) {
        char c = 0;
        int l = 0, r = 0;
        std::cin >> c >> l >> r;

        int res = path[c - 'a'][r];
        if(l != 0)
            res -= path[c - 'a'][l - 1];

        std::cout << res << '\n';
    }

    std::cout << std::flush;

    return 0;
}
