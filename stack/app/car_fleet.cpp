#include "lib.hpp"


int carFleet(int target, vector<int>& position, vector<int>& speed) {

    auto m_pt = [&](int i,int j){ 
        int x{};
        int d_i,d_j;
        d_i = (target - position[i]);
        d_j = (target - position[j]);
        if (speed[i] != speed[j]){
            x = (int)((d_i * speed[j] -  d_j*speed[i])/(speed[j] - speed[i]));
            return target - x; 
            }
        else if(d_i != d_j){
            return -1;
        }
        else {
            return 0;}

    };

    int n = (int)position.size();
    vector<int>inds{};
    for (int i = 0; i < n; i++){

        int k = i;
        // int j = 0;
        while(!inds.empty() && ( m_pt(inds.back(),j) <= target) && (m_pt(inds.back(),j) >= 0)){            
            // inds.push_back(i);
            // j = (int)inds.size()-2;
            
            int k = i ? (speed[inds.back()] > speed[i]) : inds.back();
            
            inds.pop_back();
        } 

        inds.push_back(k);


    }

    return (int)inds.size();

        
    }


int main(){

    int target = 16;
    auto position = vector<int>{11,14,13,6};
    auto speed = vector<int>{2,2,6,7};

    cout << carFleet(target,position,speed)<<'\n';


    return 0;

}