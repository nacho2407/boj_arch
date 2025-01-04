#include <iostream>
#include <vector>

void print_sequence(int n, int m, int depth, std::vector<int> &sequence);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<int> sequence;

    print_sequence(n, m, 0, sequence);

    std::cout << std::flush;

    return 0;
}

void print_sequence(int n, int m, int depth, std::vector<int> &sequence)
{
    if(depth == m) {
        for(int i : sequence)
            std::cout << i << ' ';

        std::cout << '\n';
    }
    else {
        int start_point = (depth == 0) ? 1 : sequence[sequence.size() - 1];

        for(int i = start_point; i <= n; i++) {
            sequence.push_back(i);

            print_sequence(n, m, depth + 1, sequence);

            sequence.pop_back();
        }
    }
}
