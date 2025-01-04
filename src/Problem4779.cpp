#include <cmath>
#include <iostream>
#include <string>

void cantor(int flag[], int begin, int end);
void print_set(int flag[], int size);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    for(; ; ) {
        std::string s;
        std::getline(std::cin, s);

        if(s == "")
            break;
        
        int n = std::stoi(s);

        if(n == 0)
            std::cout << "-\n";
        else {
            int* flag = new int[(int) std::pow(3,n)] { 0 };

            cantor(flag, 0, (int) std::pow(3,n) - 1);

            print_set(flag, (int) std::pow(3,n));

            delete[] flag;
        }
    }

    std::cout << std::flush;

    return 0;
}

void cantor(int flag[], int begin, int end)
{
    if(end - begin + 1 == 3) {
        flag[begin + 1] = 1;

        return;
    }

    for(int i = begin + (end - begin + 1) / 3; i < begin + (end - begin + 1) / 3 * 2; i++)
        flag[i] = 1;

    cantor(flag, begin, begin + (end - begin + 1) / 3 - 1);
    cantor(flag, begin + (end - begin + 1) / 3 * 2, end);
}

void print_set(int flag[], int size)
{
    for(int i = 0; i < size; i++) {
        if(flag[i] == 0)
            std::cout << '-';
        else
            std::cout << ' ';
    }
    std::cout << '\n';
}
