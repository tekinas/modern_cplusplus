//lamba init capture

#include <iostream>

using namespace std;

int main()
{
	int x = 4;
	auto y = [&r = x, x = x + 1]() {
		r += 2;
		return x + 2;
	}();

	std::cout << "x = " << x << "\n";
	std::cout << "y = " << y << "\n";
}
//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------
