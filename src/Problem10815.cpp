#include <cstdio>
#include <set>

int main(void) {
    int n, m, temp;
    std::set<int> cards;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        cards.insert(temp);
    }

    scanf("%d", &m);

    scanf("%d", &temp);

    if(*cards.find(temp) != *cards.end()) {
        printf("%d", 1);
    }
    else {
        printf("%d", 0);
    }

    for(int i = 1; i < m; i++) {
        scanf("%d", &temp);

        if(cards.find(temp) != cards.end()) {
            printf(" %d", 1);
        }
        else {
            printf(" %d", 0);
        }
    }

    return 0;
}
