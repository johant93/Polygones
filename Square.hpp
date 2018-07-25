#ifndef SQUARE_HPP
#define SQUARE_HPP



#include <stdio.h>
#include <iostream>
#include "AbstractPolygone.hpp"
#include "WrongValException.hpp"

using namespace std ;

class Square : public AbstractPolygone {
  
private:
    int* vertices ;
    int edge;
    
public :
    // constructor
    Square(int e):edge(e),vertices(new int[4]),AbstractPolygone(){
        
        if(e <= 0)
            throw WrongValException(e);
        
        for(int i = 0; i < 4 ; ++i)
            vertices[i]=0 ;
    }
    
    ~Square (){
        delete [] vertices ;
    }
    
    void setVertices(int a,int b,int c,int d){
        vertices[0] = a ;
        vertices[1] = b ;
        vertices[2] = c ;
        vertices[3] = d ;
        
    };
    
    virtual double getArea() const {
        return edge*edge ;
    }
    
    virtual void print() const {
        cout << "Square:(" ;
        for(int i = 0; i < 4 ; ++i)
            cout << vertices[i] <<"," ;
        cout << ")  Edge size:" << edge <<"  Area:"<< getArea() << endl ;
    }
    
};






#endif // square.hpp
