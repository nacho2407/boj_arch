#include <iostream>
#include <vector>

typedef struct range
{
    long long int max;
    int start;
    int end;
} range;

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(; n != 0; ) {
        std::vector<int> hist(n);
        for(int i = 0; i < n; i++)
            std::cin >> hist[i];

        std::vector<range> mem;
        for(int i = 0; i < n - 1; i += 2) {
            int taller = hist[i] > hist[i + 1] ? hist[i] : hist[i + 1];
            int shorter = hist[i] > hist[i + 1] ? hist[i + 1] : hist[i];
            
            mem.push_back(range{taller > (long long int) shorter * 2 ? taller : (long long int) shorter * 2, i, i + 1});
        }

        if(n & 1)
            mem.push_back(range{hist[n - 1], n - 1, n - 1});

        for(int size = mem.size(); size > 1; size = (size & 1 ? size / 2 + 1 : size / 2)) {
            for(int i = 0; i < size - 1; i += 2) {
                long long int max = (hist[mem[i].end] < hist[mem[i + 1].start] ? hist[mem[i].end] : (long long int) hist[mem[i + 1].start]) * 2;
                long long int bigger = mem[i].max > mem[i + 1].max ? mem[i].max : mem[i + 1].max;
                
                if(max < bigger)
                    max = bigger;

                int shortest = hist[mem[i].end] < hist[mem[i + 1].start] ? hist[mem[i].end] : hist[mem[i + 1].start];
                int count = 2;
                int left = mem[i].end - 1;
                int right = mem[i + 1].start + 1;
                for(int found = 2; found < mem[i + 1].end - mem[i].start + 1; ) {
                    for(; left >= mem[i].start; left--) {
                        if(hist[left] >= shortest)
                            count++;
                        else
                            break;
                    }
                    for(; right <= mem[i + 1].end; right++) {
                        if(hist[right] >= shortest)
                            count++;
                        else
                            break;
                    }

                    if((long long int) shortest * count > max)
                        max = (long long int) shortest * count;

                    if(left < mem[i].start)
                        shortest = hist[right];
                    else if(right > mem[i + 1].end)
                        shortest = hist[left];
                    else
                        shortest = hist[left] > hist[right] ? hist[left] : hist[right];
                    found += count - found;
                }

                mem[i / 2] = range{max, mem[i].start, mem[i + 1].end};
            }

            if(size & 1)
                mem[size / 2] = mem[size - 1];
        }

        std::cout << mem[0].max << '\n';
        
        std::cin >> n;
    }

    std::cout << std::flush;

    return 0;
}
