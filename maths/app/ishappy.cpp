#include<iostream>
#include<cmath>

bool isHappy(int n) {
    int sum{};
    int sing_{};
    while(n > 1){
        std::cout<<n<<"\n";

        auto num = floor(log10(n)+1);
        
        if (num ==1 && n != 1 ){
            if (n == sing_){return false;}
            else{sing_ = n;}
        }

        for(int i = num-1;i>=0;i--){
            int temp = floor(n/(pow(10,i)));
            temp = temp%10;
            sum += pow(temp,2);
        }
        n = sum;
        sum = 0;
    }
    return true;
}

int main(){    
    std::cout<<isHappy(7)<<"\n";
    return 0;
}