#include "Array.hpp"
#include <iostream>
#include <sstream>

template < typename T >
void test( Array< T > a )
{
	for ( unsigned i = 0; i < a._n; i++ )
		std::cout << a._array[ i ] << " ";
	std::cout << std::endl;
}

int	main( int argc, char* argv[] )
{

	if ( argc == 1 )
	{	Array< int >	a0;
		test( a0 );
		return 0;
	}
	std::stringstream	ss( argv[ 1 ]);
	unsigned			n = 0;
	ss >> n;
	try
	{
		Array< int >	a( n );
		test( a );
	}
	catch( const std::exception& e )
	{	std::cout << "This is the end: " << e.what() << std::endl;
	}
}
