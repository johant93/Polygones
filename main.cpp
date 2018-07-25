
#include <iostream>
#include "AbstractPolygone.hpp"
#include "Triangle.hpp"
#include "Square.hpp"

using namespace std ;

int main (){

    cout << AbstractPolygone::Count() << endl ; // 0
    Triangle t1(5) ;
    cout << AbstractPolygone::Count() << endl ; // 1
    t1.print();
    t1.setVertices(1,2,3);
    t1.print();
    Square sq1(5) ;
    cout << AbstractPolygone::Count() << endl ; // 2
    sq1.print();
    sq1.setVertices(1,2,3,4);
    sq1.print();
    
    cout << "t1.Count():"<< t1.Count() <<" sq1.Count():"<<  sq1.Count() << endl;

    // simulate an DoubleValException
    Square sq2(0); // throw an error because edge need to be > 0
    
   // cout << AbstractPolygone::Count() << endl ; // 3
}
