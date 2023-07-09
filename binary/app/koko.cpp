

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;


int minEatingSpeed(vector<int>& piles, int h) {

    
    
    int m = 0;
    for (auto v:piles){
        if (v > m) m = v;
    }

    if(piles.size() == 1 && h > piles[0]){
        return 1;
    }

    if (h == piles.size()) return m;
    

    float s = 1;
    float k = m;

    while(m > s){

        if (k == ceil((s+m)/2)){
            break;
        }

        int hours{};
        k = ceil((s+m)/2) ;
        for (auto v:piles){
            hours += ceil((float)v/(float)k);    
        }
        if (hours < h){
            m = k;
        }
        else if(hours > h){
            s = k;
        }else{    
            break;
        }
        
    }   

    while(k > 0){
        int hours{};
        k -= 1;
        for (auto v:piles){
            hours += ceil((float)v/(float)k);    
        }
        if(hours > h){
            k = k+1;
            break;
        }


    }


    return k;
    
}


int main(){
vector<int>banana = {1000000000};
cout<<minEatingSpeed(banana,2)<<'\n';
return 0;
}