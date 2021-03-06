//modern C++ examples

#include <string>

struct S
{
	int n;
	std::string s;
	float d;
};

template <std::size_t I>
auto& get(S& s)
{
	if constexpr (I == 0)
		return s.n;
	else if constexpr (I == 1)
		return s.s;
	else if constexpr (I == 2)
		return s.d;
}
//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------

