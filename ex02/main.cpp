#include "Array.hpp"
#include <iostream>

int	main()
{
	Array< int >	a0;
	Array< int >	a20(20);

	for ( unsigned i = 0; i < a20._n; i++ )
		std::cout << a20._array[ i ] << " ";
	std::cout << std::endl;
}
