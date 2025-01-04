#include <iostream>

int fib(int n);
int fibonacci(int n);

int count1 = 0;
int count2 = 0;

int main(void)
{
	int n = 0;

	std::cin >> n;

	fib(n);
	fibonacci(n);

	std::cout << count1 << ' ' << count2 << std::endl;

	return 0;
}

int fib(int n)
{
	if(n == 1 || n == 2) {
		count1++;

		return 1;
	} else
		return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
	int *mem = new int[n + 1] { 0 };

	mem[1] = 1;
	mem[2] = 1;

	for(int i = 3; i <= n; i++) {
		mem[i] = mem[i - 1] + mem[i - 2];

		count2++;
	}

	delete[] mem;

	return mem[n];
}
