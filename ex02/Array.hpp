#pragma once
#include <iostream>
#include <stdexcept>

template < typename T >
class Array {
public:
	Array()
	: _n( 0 ), _array( NULL )
	{};
	Array( unsigned n )
	: _n( n ), _array( new T[_n]() )
	{};
	Array( const Array& src )
	: _n( src._n ), _array( new T[_n]() )
	{};
	~Array()
	{	delete[] _array; };
	// Array&	operator=( const Array& src )
	// {};

	unsigned	_n;
	T*			_array;
private:
};
