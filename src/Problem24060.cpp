#include <iostream>

void merge_sort(int* array, int begin, int end, int& count, int k, int& num);

void merge(int* array, int begin, int middle, int end, int& count, int k, int& num);

int main(void)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    int* array = new int[n];

    for(int i = 0; i < n; i++)
        std::cin >> array[i];

    int count = 0, num = 0;

    merge_sort(array, 0, n - 1, count, k, num);

    if(num != 0)
        std::cout << num;
    else
        std::cout << -1;

    std::cout << std::endl;

    delete[] array;

    return 0;
}

void merge_sort(int* array, int begin, int end, int& count, int k, int& num)
{
    if(num == 0 && begin < end) {
        merge_sort(array, begin, (begin + end) / 2, count, k, num);
        merge_sort(array, (begin + end) / 2 + 1, end, count, k, num);
        merge(array, begin, (begin + end) / 2, end, count, k, num);
    }
}

void merge(int* array, int begin, int middle, int end, int& count, int k, int& num)
{
    int i = begin, j = middle + 1, t = 0;
    int* temp = new int[end - begin + 1];

    for(; i <= middle && j <= end; t++) {
        if(array[i] <= array[j])
            temp[t] = array[i++];
        else
            temp[t] = array[j++];
    }

    for(; i <= middle; i++)
        temp[t++] = array[i];
    for(; j <= end; j++)
        temp[t++] = array[j];
    
    for(int l = 0; l < end - begin + 1; l++) {
        array[begin + l] = temp[l];
        count++;
        
        if(count == k) {
            num = temp[l];
            return;
        }
    }
}
