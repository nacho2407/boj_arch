#include <iostream>
#include <vector>

typedef std::vector<int> vector;

int w(int a, int b, int c, std::vector<std::vector<vector>> &mem);

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	std::vector<std::vector<vector>> mem(101, std::vector<vector>(101, vector(101, 0)));

	int a = 0, b = 0, c = 0;
	
	std::cin >> a >> b >> c;

	for(; a != -1 || b != -1 || c != -1; ) {
		w(a, b, c, mem);

		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << mem[a + 50][b + 50][c + 50] << '\n';

		std::cin >> a >> b >> c;
	}

	std::cout << std::flush;

	return 0;
}

int w(int a, int b, int c, std::vector<std::vector<vector>> &mem)
{
	if(mem[a + 50][b + 50][c + 50] != 0)
		return mem[a + 50][b + 50][c + 50];
	
	if(a <= 0 || b <= 0 || c <= 0) {
		mem[a + 50][b + 50][c + 50] = 1;

		return 1;
	}
	
	if(a > 20 || b > 20 || c > 20) {
		mem[a + 50][b + 50][c + 50] = w(20, 20, 20, mem);

		return mem[a + 50][b + 50][c + 50];
	}
	
	if(a < b && b < c) {
		mem[a + 50][b + 50][c + 50] = w(a, b, c - 1, mem) + w(a, b - 1, c - 1, mem) - w(a, b - 1, c, mem);
		
		return mem[a + 50][b + 50][c + 50];
	}
	
	mem[a + 50][b + 50][c + 50] = w(a - 1, b, c, mem) + w(a - 1, b - 1, c, mem) + w(a - 1, b, c - 1, mem) - w(a - 1, b - 1, c - 1, mem);
	
	return mem[a + 50][b + 50][c + 50];
}
