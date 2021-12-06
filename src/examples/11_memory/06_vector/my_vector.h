//
#include<iostream>
#include<cstddef>

#ifndef LIST_ABSTRACT_H
#define LIST_ABSTRACT_H

class List_Abstract
{
public:
    virtual std::size_t Size() const = 0;
};

#endif

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector : public List_Abstract
{
public:
    Vector(std::size_t s);
    Vector(const Vector& v);//Rule 1 of 3 of C++ Rule of 3
    std::size_t Size() const {return size;}
    int& operator[](std::size_t i) const{return elements[i]; }//read cout<<v[0];
    int& operator[](std::size_t i) {return elements[i];}//write v[0] = 5;
private:
    std::size_t size;
    int* elements;//list of ints,
};

#endif