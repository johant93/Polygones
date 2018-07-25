#ifndef ABSTRACTPOLYGONE_HPP
#define ABSTRACTPOLYGONE_HPP

/** All the includes needed. */
#include <iostream>
#include <stdio.h>

using namespace std ;

class AbstractPolygone{
    static int count ;
    
public:
    
    AbstractPolygone(){
        count++;
    }
    virtual ~AbstractPolygone(){
        count--;
    }
    virtual void print() const = 0;
    virtual double getArea() const = 0;
    
    static int Count()  {
        return count ;
    }
    
};

int AbstractPolygone::count = 0;



#endif // AbstractPolygone.hpp
