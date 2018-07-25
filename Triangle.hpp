
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP



#include <stdio.h>
#include <iostream>
#include <math.h>       /* sqrt */
#include "AbstractPolygone.hpp"

using namespace std ;

class Triangle : public AbstractPolygone {
    
private:
    int* vertices ;
    int edge;
    
    public :
    // constructor
    Triangle(int e):edge(e),vertices(new int[3]),AbstractPolygone(){
        for(int i = 0; i < 3 ; ++i)
            vertices[i]=0;
    }
    
    ~Triangle (){
        delete [] vertices ;
    }
    
    void setVertices(int a,int b,int c){

            vertices[0] = a ;
            vertices[1] = b ;
            vertices[2] = c ;
            
    }
    
    virtual double getArea() const {
        return (pow(edge,2)*sqrt(3))/4 ;
    }
    
    virtual void print() const {
        cout << "Triangle:(" ;
        for(int i = 0; i < 3 ; ++i)
            cout << vertices[i] <<"," ;
        cout << ") Edge size:" << edge <<"  Area:"<< getArea() << endl ;
    }
    
};






#endif // triangle.hpp
