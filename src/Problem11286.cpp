#include <iostream>
#include <queue>
#include <vector>

struct cmp
{
        bool operator()(int first, int second)
        {
                int abs_first = first;
                int abs_second = second;

                if(first < 0)
                        abs_first *= -1;

                if(second < 0)
                        abs_second *= -1;

                if(abs_first == abs_second)
                        return first > second;
                else
                        return abs_first > abs_second;
        }
};

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;

        std::priority_queue<int, std::vector<int>, cmp> heap;
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
