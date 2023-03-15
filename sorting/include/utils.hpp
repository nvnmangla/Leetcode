#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

auto Unsorted = std::vector<int>{6,3,5,2,7,10,3,12};

/**
 * @brief Swap two numbers in a vector 
 * 
 * @param A Vector
 * @param i index of num 1
 * @param j index of num 2 
 */
void swap(vector<int> &A,int i,int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

/**
 * @brief Printing vector
 * 
 * @tparam T 
 * @param v vector to print
 */
template<class T>
void printv(vector<T>&v){
    cout<<"\n{ ";
    for (T i:v){
        cout << i <<" ";
    }
    cout<<" }\n";

}

/**
 * @brief Merging 2 vectors [v1,v2 [ j : ] ] 
 * 
 * @param v1 start vector
 * @param v2 end vector
 * @param j start point from j
 */
void add_v(vector<int>&v1, vector<int>&v2,int j){
    for (int i=j; i< (int)v2.size(); i++){
        v1.push_back(v2[i]);
    }
}

/**
 * @brief Insertion Sort 
 * @param vec  Vector to sort 
 */
void sort(vector<int>&vec){ // Insertion sort

        for (int j = 1;j < static_cast<int>(vec.size());j++){    
            auto key = vec[j];
            int i = j-1;
            while (i >= 0 && vec[i] > key){
                vec[i+1] = vec[i];
                i--;
            }
            vec[i+1] = key;
            }
    }

/**
 * @brief Get the subarray object
 * 
 * @param v Parent Array
 * @param start start index
 * @param end end index
 * @return vector<int> 
 */
vector<int> get_subarray(vector<int>&v,int start,int end){ 

        auto r = vector<int>{};
            
        for (int i = start; i <end; i++){
                r.push_back(v[i]);
        }

        return r;
    }

/**
 * @brief Build the heap, root as i
 * @param A Array
 * @param i index for the root 
 * @param heap_size size of the heap 
 */
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


/**
 * @brief return elem, with largest key
 * 
 * @param A Heapified array
 * @return int
 */
int maximum(vector<int>&A){
    return A[0];
}



/**
 * @brief Increase-Key(S,i,k)- to increase elemnt key to k
 * 
 * @param A Heapfied array
 * @param i index 
 * @param k key
 */

void increase_key(vector<int>&A,int i,int k){
    // Use of lambda 
    auto parent = [](int i){
        if (i>0){
            return (int)floor(i/2)-1;
        }else{
            return 0;
        }
    };
    A[i] = k;
    while(i<0 && A[parent(i)] < A[i]){
        swap(A,i,parent(i));
        i = parent(i);       
    }
}

/**
 * @brief Extracting and removing max value 
 * 
 * @param A 
 * @return int 
 */
int extact_max(vector<int>&A){
    auto heap_size = (int)A.size()-1;
    int max = A[0];
    A[0] = A[A.size()-1];
    heap_size -= 1;
    max_heapify(A,0,heap_size);
    return max;
}

void insert_key(vector<int>&A,int key){
    auto heap_size = A.size();
    A.push_back(-INFINITY);
    increase_key(A,heap_size,key);

}
