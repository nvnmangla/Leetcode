
#include <utils.hpp>

/*
Solution by recurrances 
Solutions by Recursion:

•   Divide a problem into smaller sub-problems
•   Solve the sub-problems recursively until they are small enough for 
    trivial solutions
•   Combine the solutions to solve the original problem

*/


// Merge sort 

int main(){

    auto v = Unsorted;

    auto l = (int)v.size();

    auto n_r = floor(l/2);
    auto n_l = l - n_r;
    auto right = get_subarray(v,0,n_r);
    auto left = get_subarray(v,n_r,l);

    sort(left);
    sort(right);

    printv<int>(left);

    return 0;
}

/**
 * Master Solution for solving Recurrences problems
 * 
 */