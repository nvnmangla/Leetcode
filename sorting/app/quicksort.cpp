/**
 * @file quicksort.cpp
 * @author Naveen Mangla (nmangla@umd.edu)
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/** @brief Worst Case vs Average Running Time
                • Worst-case running time of quicksort is Θ(𝑛^2) – worse than
                  heapsort and merge sort.
                • However, it is very efficient on average – its expected running
                  time is Θ(𝑛lg𝑛), with small constant factors.
                • This usually makes quicksort the best practical choice for sorting.
*/


#include "utils.hpp"

int partition(vector<int>&A,int p, int r);
void quick_sort(vector<int>&A,int p,int r);

int main(){

  auto v = Unsorted; 
  auto r = (int)Unsorted.size()-1;
  quick_sort(v,0,r);
  printv(v);

  return 0;
}

void quick_sort(vector<int>&A,int p,int r){
  if ( p<r ){
      auto q = partition(A,p,r);
      quick_sort(A,p,q-1);
      quick_sort(A,q+1,r);
  } 

}

/**
 * @brief Partition of A 
 * 
 * @param A Unsorted Array
 * @param p start
 * @param r end 
 * @return int 
 */
int partition(vector<int>&A,int p, int r){

  int x = A[r];
  int i = p-1;
  for (int j=p;j<r;j++){
    if (A[j] <= x){
      i++;
      swap(A,i,j);
    }
  }
  swap(A,i+1,r);
  return i+1;
};
