#pragma once
#include <iostream>
#include <stdexcept>

template < typename T >
class Array {
public:
	Array()
	:	_n( 0 ), _array( NULL )
	{};
	Array( unsigned n )
	:	_n( n ), _array( new T[_n]() )
	{};
	Array( const Array& src )
	:	_n( src._n ), _array( new T[_n]() )
	{	copy( src._array );
	};
	~Array()
	{	delete[] _array;
	};
	Array&		operator=( const Array& src )
	{	delete[] _array;
		_n = src._n;
		_array = new T[ _n ];
		copy( src._array );
		return *this;
	};
	T&			operator[]( unsigned i ) throw ( std::out_of_range )
	{	if ( i >= _n )
			throw std::out_of_range(" Array::operator[]: index >= len");
		return _array[ i ];
	}
	const T&	operator[]( unsigned i ) const throw ( std::out_of_range )
	{	if ( i >= _n )
			throw std::out_of_range(" Array::operator[]: index >= len");
		return _array[ i ];
	}
	unsigned	size() const
	{	return _n;
	}

private:
	unsigned	_n;
	T*			_array;

	void		copy( T src[] )
	{	for ( unsigned i = 0; i < _n; i++ )
			_array[ i ] = src[ i ];
	}
};
