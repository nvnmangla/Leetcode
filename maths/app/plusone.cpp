#include "utils.hpp"

using std::vector;
using std::cout;

int main(){

    auto digits = vector<int>{6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3};
    auto num = (int)digits.size()-1;

    long int sum{};
    for(int i = num;i>=0;i--){
        sum += digits[num-i]*pow(10,i);
        cout<<sum<<"\n";

    }
    sum ++;

    vector<int>digit{};
    num = floor(log10(sum)+1);

    for(int i = num-1;i>=0;i--){
            long int temp = floor(sum/(pow(10,i)));
            digit.push_back(temp%10);

        }
    printv(digit);
    return 0;
}