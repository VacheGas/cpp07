#include "whatever.hpp"

#include "whatever.hpp"

int main()
{
	int a , b;
	double a_d, b_d;
	char a_c, b_c;
	a = 2;
	b = 4;
	a_d = 4.7;
	b_d = 5.2;
	a_c = 'f';
	b_c = 'a'; 
	std::cout << " a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << " a = " << a << " b = " << b << std::endl;
	std::cout << " min = " << min(a, b) << std::endl;
	std::cout << " max = " << max(a, b) << std::endl;
	std::cout << " a_d = " << a_d << " b_d = " << b_d << std::endl;
	swap(a_d, b_d);
	std::cout << " a_d = " << a_d << " b_d = " << b_d << std::endl;
	std::cout << " min = " << min(a_d, b_d) << std::endl;
	std::cout << " max = " << max(a_d, b_d) << std::endl;
	std::cout << " a_c = " << a_c << " b_c = " << b_c << std::endl;
	swap(a_c, b_c);
	std::cout << " a_c = " << a_c << " b_c = " << b_c << std::endl;
	std::cout << " min = " << min(a_c, b_c) << std::endl;
	std::cout << " max = " << max(a_c, b_c) << std::endl;
	a = b = 78;
	std::cout << " a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << " a = " << a << " b = " << b << std::endl;
	std::cout << " min = " << min(a, b) << std::endl;
	std::cout << " max = " << max(a, b) << std::endl;
}