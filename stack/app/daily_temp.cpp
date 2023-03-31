
#include "lib.hpp"

vector<int> dailyTemperatures(vector<int>& temperatures) {
    
    vector<int> temp{};
    vector<int> days(temperatures.size(),0);
    

    for (int t=0; t< temperatures.size() ; t++) {
        
        while(!temp.empty() && (temperatures[temp.back()] < temperatures[t])){
            days[temp.back()] = t - temp.back();
            temp.pop_back();
        }
        temp.push_back(t);

    }
    return days;

}

int main(){
    vector<int>temps = {89,62,70,58,47,47,46,76,100,70};
    auto days = dailyTemperatures(temps);
    for (auto i:days){
        cout<<i<<" ";
    }
    
    return 0;}