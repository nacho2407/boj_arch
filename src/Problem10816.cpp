#include <iostream>

int main(void)
{
    int* cards = new int[20000001] {0};
    
    int n;
    std::cin >> n;

    int tmp;
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        cards[tmp + 10000000]++;
    }

    int m;
    std::cin >> m;
    int* hints = new int[m];

    for(int i = 0; i < m; i++)
    {
        std::cin >> tmp;
        hints[i] = tmp;
    }
    
    for(int i = 0; i < m - 1; i++)
    {
        std::cout << cards[hints[i] + 10000000] << ' ';
    }

    std::cout << cards[hints[m - 1] + 10000000];

    delete[] hints;
    delete[] cards;
    
    return 0;
}
