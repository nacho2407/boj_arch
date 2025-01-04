#include <iostream>
#include <set>

int euclidean(int min, int max)
{
    if(min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }

    int temp = 0;
    for(; min > 0; )
    {
        temp = max;
        max = min;
        min = temp % min;
    }

    return max;
}

int main(void)
{
    int n = 0;
    std::cin >> n;

    std::set<int> tree;

    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin >> temp;
        tree.insert(temp);
    }

    auto tree_iterator = ++tree.begin();
    int min_term = *tree_iterator - *tree.begin();
    int previous_point = *tree_iterator;
    for(tree_iterator++; tree_iterator != tree.end(); tree_iterator++)
    {
        min_term = euclidean(min_term, *tree_iterator - previous_point);
        previous_point = *tree_iterator;
    }

    std::cout << (((*tree.rbegin() - *tree.begin()) / min_term) + 1 - tree.size()) << std::endl;
}
