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
void test( Array< T > a, T filler )
{
	iter( a, print );
	Array< T >	a2( a.size() * 3 );
	iter( a2, set, filler );
	a = a2;
	iter( a, print );
	std::cout << std::endl;
}

int	main( int argc, char* argv[] )
{

	if ( argc == 1 )
	{	Array< unsigned >	a0;
		test( a0, -1U );
		return 0;
	}
	std::stringstream	ss( argv[ 1 ]);
	unsigned			n = 0;
	ss >> n;
	try
	{	Array< int >	a1( n );
		test( a1, 3 );
		Array< std::string >	strings( n );
		test( strings, std::string( "abc" ) );
	}
	catch( const std::exception& e )
	{	std::cout << "This is the end: " << e.what() << std::endl;
	}
}
