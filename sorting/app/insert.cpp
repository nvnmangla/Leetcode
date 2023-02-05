// Instert sort


#include <utils.hpp>
int main(){
    auto v = std::vector<int>{2,3,5,6,7,10,3};


    for (int j = 1;j < v.size();j++){    
        auto key = v[j];
        int i = j-1;
        while (i > 0 && v[i] > key){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;
    }

    printv(v);

    return 0;
}