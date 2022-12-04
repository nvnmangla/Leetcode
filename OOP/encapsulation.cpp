#include <iostream>  // for iostream
// A generic class
template <class T,int size = 50> // class of type T
class Generic{
    T storage[size]; // array of size , size, default is 50
};
