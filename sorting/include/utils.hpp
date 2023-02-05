#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

auto Unsorted = std::vector<int>{2,3,5,6,7,10,3,12};

template<class T>
void printv(vector<T>&v){

    for (T i:v){
        cout << i <<endl;
    }

}


void sort(vector<int>&v){

        for (int j = 1;j < static_cast<int>(v.size());j++){    
        auto key = v[j];
        int i = j-1;
        while (i > 0 && v[i] > key){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;
    }


}

vector<int> get_subarray(vector<int>&v,int start,int end){ 

        auto r = vector<int>{};
            
        for (int i = start; i <end; i++){
                r.push_back(v[i]);
        }

        return r;
    }