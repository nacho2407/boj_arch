#include <iostream>
#include <vector>

typedef struct {
    int w;
    int v;
} thing;

int main(void)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<thing> things(n);
    for(int i = 0; i < n; i++)
        std::cin >> things[i].w >> things[i].v;

    std::vector<int> mem(k + 1, 0);
    std::vector<int> prev_mem(k + 1, 0);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            int prev = 0;
            if(things[i].w <= j)
                prev = prev_mem[j - things[i].w] + things[i].v;

            mem[j] = (prev_mem[j] > mem[j - 1]) ? (prev_mem[j] > prev ? prev_mem[j] : prev) : (mem[j - 1] > prev ? mem[j - 1] : prev);
        }

        prev_mem = mem;
        mem = std::vector<int>(k + 1, 0);
    }

    std::cout << prev_mem[k] << std::endl;

    return 0;
}
