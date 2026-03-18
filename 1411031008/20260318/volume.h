#pragma once
// Fig. 15.12: volume.h
// Definition of function template maximum.

template < class T >  // or template< typename T >
T volume(T side)
{
    return side * side * side;
}
