//C++17 if constexpr example code

#include <type_traits>

template <typename T>
auto get_value(T t) {
	if constexpr (std::is_pointer_v<T>)
		return *t;
	else
		return t;
}

#include <iostream>

using namespace std;


int main()
{
	int ival = 10;

	auto x = get_value(ival);
	auto y = get_value(&ival);

	cout << x << y << endl;

	return 0;
}
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
