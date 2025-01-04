#include <iostream>
#include <queue>

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;

        std::priority_queue<int> heap;
        for(int i = 0; i < n; i++) {
                int temp;
                std::cin >> temp;

                if(temp == 0) {
                        if(heap.empty())
                                std::cout << 0 << '\n';
                        else {
                                std::cout << heap.top() << '\n';
                                heap.pop();
                        }
                } else
                        heap.push(temp);
        }

        std::cout << std::flush;

        return 0;
}
