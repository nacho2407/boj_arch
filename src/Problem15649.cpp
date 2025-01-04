#include <iostream>
#include <vector>

using namespace std;

void print_sequence(int n, int m, int depth, vector<int>& print, int* bag);

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, m = 0;
    cin >> n >> m;

    if(m == 1) {
        for(int i = 1; i <= n; i++)
            cout << i << '\n';
        cout << flush;

        return 0;
    }

    int* bag = new int[n + 1];
    for(int i = 1; i <= n; i++)
        bag[i] = i;

    for(int i = 1; i <= n; i++) {
        vector<int> print;

        bag[i] = 0;
        print.push_back(i);

        print_sequence(n, m, 2, print, bag);

        bag[i] = i;
    }

    cout << flush;

    delete[] bag;

    return 0;
}

void print_sequence(int n, int m, int depth, vector<int>& print, int* bag)
{
    if(depth == m) {
        for(int j = 1; j <= n; j++) {
            if(bag[j] != 0) {
                for(int i : print)
                    cout << i << ' ';

                cout << j << '\n';
            }
        }
    }
    else {
        for(int i = 1; i <= n; i++) {
            if(bag[i] != 0) {
                bag[i] = 0;
                print.push_back(i);

                print_sequence(n, m, depth + 1, print, bag);

                bag[i] = i;
                print.pop_back();
            }
        }
    }
}
