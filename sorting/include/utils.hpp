#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

auto Unsorted = std::vector<int>{6,3,5,2,7,10,3,12};

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

void add_v(vector<int>&v1, vector<int>&v2,int j){
    for (int i=j; i< (int)v2.size(); i++){
        v1.push_back(v2[i]);
    }
}

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

vector<int> get_subarray(vector<int>&v,int start,int end){ 

        auto r = vector<int>{};
            
        for (int i = start; i <end; i++){
                r.push_back(v[i]);
        }

        return r;
    }