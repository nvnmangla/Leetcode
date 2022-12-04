#include <iostream>
#include <cmath>
// Pointers and arrays
int main(){
    int a[5] = {0,1,2,3,4};
    // a[0] can be replaced by *a
    std::cout<<*a;
    // a[1] can be replaced by *(a+1)

    // Pointers and copy constructor
    // TODO Study copying and copy contructor  
    return 0;
}


// Passing by reference for functions
int& f(int a[],int i){
        return a[i];
    }
int main(){
    int a[5] = {1,2,3,4,5};

    f(a,3) = 6; // {1,2,3,6,5}
    return 0; 
}

// Pointers and functions

// double f(double x)-> double (*f)(int) 
// Then the functional can be:
double addition(double (*f)(double), int x,int y ){
        return f(x)+f(y);
}

int main(){
    auto a = addition(exp,0,1); // using exp function
    return 0;
}
