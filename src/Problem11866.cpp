#include <deque>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0, k = 0;
    std::cin >> n >> k;

    std::deque<int> circle;
    for(int i = 1; i <= n; i++)
    {
        circle.push_back(i);
    }
    
    int* output = new int[n];
    for(int i = 0; !circle.empty(); i++)
    {
        for(int j = 1; j < k; j++)
        {
            circle.push_back(circle.front());
            circle.pop_front();
        }

        output[i] = circle.front();
        circle.pop_front();
    }

    std::cout << '<' << output[0];
    for(int i = 1; i < n; i++)
    {
        std::cout << ", " << output[i];
    }

    std::cout << '>' << std::endl;

    delete[] output;

    return 0;
}
