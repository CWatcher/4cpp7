#include "iter.hpp"
#include <iostream>

template< typename T >
void	squareIt( T & x )
{ x *= x;
}


int 	main() {
	int	nums[] = { 11, 22, 33 };

	iter( nums, 3, squareIt );
	iter( nums, 3, print );

	return 0;
}
