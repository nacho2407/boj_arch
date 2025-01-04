#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;

    // 1과 자기 자신을 제외한 약수를 홀수개로 가지는 경우는 제곱수인 경우 밖에 없음!
    int count = 0;
    for(int i = 1; i * i <= n; i++)
    {
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}
