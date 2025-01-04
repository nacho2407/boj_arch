#include <iostream>
#include <vector>

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::vector<int> jumps(n + 1, 0);

    for(int i = 1; i < n; i++) {
        int next = jumps[i] + 1;

        if(i << 1 <= n) {
            if(jumps[i << 1] == 0 || jumps[i << 1] > next)
                jumps[i << 1] = next;

            if(i * 3 <= n) {
                if(jumps[i * 3] == 0 || jumps[i * 3] > next)
                    jumps[i * 3] = next;
            }
        }

        if(jumps[i + 1] == 0 || jumps[i + 1] > next)
            jumps[i + 1] = next;
    }

    std::cout << jumps[n] << std::endl;

    return 0;
}
