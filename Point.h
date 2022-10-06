#ifndef POINT_H
#define POINT_H
#include <iostream>

#pragma once

template <class T>

class Point
{
public:
    Point();
    Point(T x, T y);
    ~Point();

    void print();


private:
    T x;
    T y;


};

#endif

template <class T>
Point<T>::Point(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <class T>
Point<T>::~Point()
{

}

template <class T>
void Point<T>::print()
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

template <class T>
Point<T>::Point():
Point(0,0)
{
    
}
