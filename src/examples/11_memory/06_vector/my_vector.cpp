#include "my_vector.h"

using std::cout;

Vector::Vector(std::size_t s) 
: size(s), elements{new int[s]()}/*Create dyanmic memory for elements of size s*/
{
    cout<<"Constructor(s)-Creating memory "<<elements<<"\n";//display address of elements
}

/*
Copy constructor
1 Initialize size for v1 from v
2 Initialize memory for v1
3 Copy elements from v to v1
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    cout<<"Execute copy constructor "<<elements<<"\n";

    for(std::size_t i =0; i < v.size; ++i)
    {
        elements[i] = v.elements[i];
    }

}

