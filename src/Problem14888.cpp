#include <deque>
#include <iostream>
#include <set>

#define OPS 4

void solve(int bound, int level, int *nums, int ops[], std::deque<int> &sequence, std::set<int> &results);

int main(void)
{
    int n = 0;
    std::cin >> n;

    int *nums = new int[n];
    for(int i = 0; i < n; i++)
        std::cin >> nums[i];

    int ops[OPS];
    for(int i = 0; i < OPS; i++)
        std::cin >> ops[i];

    std::deque<int> sequence;

    std::set<int> results;

    solve(n - 1, 0, nums, ops, sequence, results);

    std::cout << *results.rbegin() << '\n' << *results.begin() << std::endl;

    delete[] nums;

    return 0;
}

inline void calculate(int n, int * nums, std::deque<int> &sequence, std::set<int> &results)
{
    int result = nums[0];

    for(int i = 1; i < n; i++) {
        switch (sequence.front())
        {
        case 0 :
            result += nums[i];

            break;
        case 1 :
            result -= nums[i];
            
            break;
        case 2 :
            result *= nums[i];
            
            break;
        default:
            result /= nums[i];
        }

        sequence.push_back(sequence.front());
        sequence.pop_front();
    }

    results.insert(result);
}

void solve(int bound, int level, int *nums, int ops[], std::deque<int> &sequence, std::set<int> &results)
{
    if(level == bound)
        calculate(bound + 1, nums, sequence, results);
    else {
        for(int i = 0; i < OPS; i++) {
            if(ops[i] != 0) {
                sequence.push_back(i);
                ops[i]--;

                solve(bound, level + 1, nums, ops, sequence, results);

                ops[i]++;
                sequence.pop_back();
            }
        }
    }
}
