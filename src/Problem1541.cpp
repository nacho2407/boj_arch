#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(void)
{
    std::string exp;
    std::cin >> exp;

    std::istringstream input(exp);
    
    std::vector<std::string> exps;

    for(std::string buffer; getline(input, buffer, '-'); )
        exps.push_back(buffer);

    int res = 0;

    int sum = 0;
    std::istringstream e(exps[0]);
    for(int n = 0; e >> n; )
        sum += n;

    res = sum;

    for(int i = 1; i < exps.size(); i++) {
        sum = 0;
        e = std::istringstream(exps[i]);
        for(int n = 0; e >> n; )
            sum += n;

        res -= sum;
    }

    std::cout << res << std::endl;

    return 0;
}
