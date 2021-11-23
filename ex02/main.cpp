#include "Array.hpp"
#include <iostream>
#include <sstream>
#include "../ex01/iter.hpp"

template < typename T >
void	iter( Array< T >& array, void ( func )( const T& ) )
{	for ( size_t i = 0; i < array.size(); i++ )
		func( array[ i ]);
}
template < typename T >
void	iter( Array< T >& array, void ( func )( T&, const T& ), T x )
{	for ( size_t i = 0; i < array.size(); i++ )
		func( array[ i ], x );
}
template < typename T >
void	set( T& x, const T& y )
{	x = y;
}
template < typename T >
void test( Array< T > a )
{
	iter( a, print );
	Array< int >	a2( a.size() * 3 );
	iter( a2, set, 3 );
	a = a2;
	iter( a, print );
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
	{	Array< int >	a1( n );
		test( a1 );
	}
	catch( const std::exception& e )
	{	std::cout << "This is the end: " << e.what() << std::endl;
	}
}
