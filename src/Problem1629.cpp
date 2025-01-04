#include <iostream>
#include <map>

long long int dnq(int a, int b, int c, std::map<int, int> &mem);

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::map<int, int> mem;

    std::cout << dnq(a, b, c, mem) << std::endl;

    return 0;
}

long long int dnq(int a, int b, int c, std::map<int, int> &mem)
{
    if(b == 1)
        return (long long int) (a % c);

    auto val = mem.find(b);
    if(val != mem.end())
        return val->second;
    
    int new_val = (dnq(a, b / 2, c, mem) * dnq(a, b - b / 2, c, mem)) % c;
    mem.insert(std::pair<int, int>(b, new_val));
    return new_val;
}
