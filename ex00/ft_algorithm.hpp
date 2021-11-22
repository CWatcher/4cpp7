template< typename T >	void		swap( T& x, T& y )
{
	T z = x;
	x = y;
	y = z;
}

template< typename T >	T const&	min( const T& x, const T& y )
{
	if ( x < y )
		return x;
	return y;
}
template< typename T >	T const&	max( const T& x, const T& y )
{
	if ( x > y )
		return x;
	return y;
}
