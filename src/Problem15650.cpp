#include <iostream>

using namespace std;

void print_sequence(int n, int m, int depth, int index, int* bag);

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, m = 0;
    cin >> n >> m;

    int* bag = new int[n + 1] { 0 };

    print_sequence(n, m, 1, 0, bag);

    cout << flush;
    
    // delete[] bag;

    return 0;
}

void print_sequence(int n, int m, int depth, int index, int* bag)
{
    if(depth == m) {
        for(int j = index + 1; j <= n; j++) {
            if(bag[j] != 1) {
                for(int i = 0, count = 0; i < n && count <= m - 1; i++) {
                    if(bag[i] == 1) {
                        cout << i << ' ';
                        count++;
                    }
                }

                cout << j << '\n';
            }
        }
    }
    else {
        for(int i = index + 1; i <= n - (m - index) + 1; i++) {
            bag[i] = 1;

            print_sequence(n, m, depth + 1, i, bag);

            bag[i] = 0;
        }
    }
}
