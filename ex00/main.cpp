#include "ft_algorithm.hpp"
#include <iostream>

template < typename T > void test( T x, T y )
{
	std::cout << x << " " << y << std::endl;
	swap( x, y );
	std::cout << x << " " << y << std::endl;
	std::cout << "max : " << ::max( x, y ) << std::endl;
	std::cout << "min : " << ::min( x, y ) << std::endl;
	std::cout << std::endl;
}

int		main()
{
	test( 21, 42 );
	test( std::string("CWatcher"), std::string("cw") );
}
