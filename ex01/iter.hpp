#include <iostream>

template <typename  T >
void iter(T array[], size_t len, void ( func )( T& ) )
{
	for ( size_t i = 0; i < len; i++ )
		func( array[ i ] );
}

template <typename T>
void iter(T const array[], size_t len, void ( func )( T const& ))
{
	for ( size_t i = 0; i < len; i++ )
		func( array[ i ] );
}

template< typename T >
void	print( const T & x )
{ std::cout << x << std::endl;
}
