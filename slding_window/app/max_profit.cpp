#include<iostream>

#include<vector>
#include<cmath>

using std::vector;



int maxProfit(vector<int>& prices) {

    auto n = prices.size();
    int max_profit{};
    int min_price = INT16_MAX;

    for(auto i = 0; i < n; i++) {
        if (min_price > prices[i]){
            min_price = prices[i];
        }

        else if (max_profit < prices[i]-min_price){
            max_profit = prices[i] - min_price;
        }


    }
        
    
    return std::max(0,max_profit);

    
    
}

int main(){

    vector<int> prices = {11,7,4,2,1};

    std::cout<< maxProfit(prices) << std::endl;
}
