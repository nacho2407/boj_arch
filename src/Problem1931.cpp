#include <algorithm>
#include <iostream>
#include <vector>

typedef struct
{
    unsigned int start;
    unsigned int end;
} meeting;

int compare(meeting first, meeting second)
{
    if(first.start == second.start)
        return first.end < second.end;
    else
        return first.start < second.start;
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0;
    std::cin >> n;

    std::vector<meeting> meetings;
    for(int i = 0; i < n; i++) {
        unsigned int start = 0, end = 0;
        std::cin >> start >> end;
        
        meetings.push_back(meeting{start, end});
    }

    std::sort(meetings.begin(), meetings.end(), compare);

    int count = 1;
    unsigned int current_time = meetings[0].end;

    for(int i = 1; i < n; i++) {
        if(meetings[i].start < current_time) {
            if(meetings[i].end < current_time)
                current_time = meetings[i].end;
        } else {
            current_time = meetings[i].end;

            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
