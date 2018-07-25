#ifndef WRONGVALEXCEPTION_HPP
#define WRONGVALEXCEPTION_HPP

#include <stdio.h>
#include <iostream>

class WrongValException: public exception {
    
private:
    double value ;
    string message ;
public:
    WrongValException(double val): value(val){
        message = "the value "+to_string(val)+" <= 0 !";
    }
    
    virtual const char* what() const throw() {
        return message.c_str();
    }
    
};

#endif
