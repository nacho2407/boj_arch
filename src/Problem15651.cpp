#include <iostream>
#include <vector>

void print_sequence(int n, int m, int depth, std::vector<int> bag);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<int> bag;

    print_sequence(n, m, 1, bag);

    std::cout << std::flush;

    return 0;
}

void print_sequence(int n, int m, int depth, std::vector<int> bag)
{
    if(m == depth) {
        for(int i = 1; i <= n; i++) {
            for(auto j = bag.begin(); j != bag.end(); j++)
                std::cout << *j << ' ';
            std::cout << i << '\n';
        }
    }
    else {
        for(int i = 1; i <= n; i++) {
            bag.push_back(i);

            print_sequence(n, m, depth + 1, bag);

            bag.pop_back();
        }
    }
}
