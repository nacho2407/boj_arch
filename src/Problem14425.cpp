#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
    int n, m, res = 0;
    string temp;
    set<string> str;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        str.insert(temp);
    }

    cin >> temp;

    if(str.find(temp) != str.end()) {
        res++;
    }

    for(int i = 1; i < m; i++) {
        cin >> temp;

        if(str.find(temp) != str.end()) {
            res++;
        }
    }

    cout << res;

    return 0;
}
