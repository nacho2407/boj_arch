#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int n;
    char person[6], io[6];
    set<string> people;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s %s", person, io);

        if(strcmp(io, "enter") == 0) {
            people.insert(person);
        }
        else {
            people.erase(person);
        }
    }

    for(set<string>::reverse_iterator it = people.rbegin(); it != people.rend(); it++) {
        if(it != people.rbegin()) {
            printf("\n");
        }
        printf("%s", it -> c_str());
    }

    return 0;
}
