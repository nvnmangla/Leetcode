
#include "utils.hpp"

void max_heapify(vector<int> &A, int i,int &heap_size);

int main(){

    auto v = Unsorted;
    auto heap_size = (int)v.size();
    
    for (int i = floor(v.size()/2); i>=0; i--){
        max_heapify(v,i,heap_size);

    }
    


    for (int i = v.size()-1; i>0; i--){
        swap(v,0,i);
        heap_size -= 1;

        max_heapify(v,0,heap_size);
    }
    printv(v);

}

void max_heapify(vector<int> &A, int i,int &heap_size){
    int l = 2*i+1;
    int r = 2*i + 2;
    int largest = i;
    if (l < heap_size && A[l] > (int)A[largest]){
        largest = l;
    } 
    
    if (r < heap_size && A[r] > (int)A[largest]){
        largest = r;
    }
    if (largest != i){
        swap(A,i,largest);
        max_heapify(A,largest,heap_size);
    }
}
