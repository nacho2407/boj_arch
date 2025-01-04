#include <iostream>
#include <string>
#include <vector>

std::string compress(std::vector<std::vector<char>> &img, int x, int y, int size);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<std::vector<char>> img(n, std::vector<char>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            std::cin >> img[i][j];
    }

    std::string res = compress(img, 0, 0, n);

    if(res.length() != 1)
        std::cout << '(' + res + ')';
    else
        std::cout << res;

    std::cout << std::endl;

    return 0;
}

std::string compress(std::vector<std::vector<char>> &img, int x, int y, int size)
{
    int i = y;
    for(; i < y + size; i++) {
        int j = x;
        for(; j < x + size; j++) {
            if(img[y][x] != img[i][j])
                break;
        }

        if(j != x + size)
            break;
    }

    std::string res;
    if(i != y + size) {
        std::string temp = compress(img, x, y, size / 2);
        if(temp.length() != 1)
            res += '(' + temp + ')';
        else
            res += temp;

        temp = compress(img, x + size / 2, y, size / 2);
        if(temp.length() != 1)
            res += '(' + temp + ')';
        else
            res += temp;

        temp = compress(img, x, y + size / 2, size / 2);
        if(temp.length() != 1)
            res += '(' + temp + ')';
        else
            res += temp;

        temp = compress(img, x + size / 2, y + size / 2, size / 2);
        if(temp.length() != 1)
            res += '(' + temp + ')';
        else
            res += temp;
    } else
        res = img[y][x];

    return res;
}
