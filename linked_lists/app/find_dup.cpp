#include<utils.hpp>
#include<iostream>
#include<vector>

/**
 * @brief Floyd's algorithm
 *        Find the start of the cycle
 * 
 */

int findDuplicate(vector<int>& nums) { 
        int slow = nums[0];
        int fast = nums[0];
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                break;
            }
        }

        int slow_2 = nums[0];
        while(true){
            slow = nums[slow];
            slow_2 = nums[slow_2];
            if(slow == slow_2){break;}
        }
        return slow_2;

    }


int main(){
    

    vector<int>s = {1,3,4,2,2};
    auto a = findDuplicate(s);
    cout<<"\n"<<a<<endl;

    return 0;
}
