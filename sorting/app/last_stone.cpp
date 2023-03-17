#include "utils.hpp"

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        while(stones.size() > 1){
            int heap_size = static_cast<int>(stones.size());

            for(int i = floor(heap_size/2); i>=0 ;i--){
                max_heapify(stones,i,heap_size);
            }

            int y = stones[0];

            swap(stones,0,heap_size-1);
            
            heap_size -= 1;

            max_heapify(stones,0,heap_size);
            int x = stones[0];
            
            printv(stones);
            if (x == y){
                stones.erase(stones.begin());
                stones.pop_back();
            }
            else {
                stones.erase(stones.begin());
                stones[heap_size-1] = y-x;
            }

    }
    if (stones.size()){
        return stones[0];
    }else return 0;
    // try {
    //     return stones[0];
    // }
    // catch(...){
    //     return 0;
    // }

    // }
    }
};

int main(){

    Solution sol;
    auto a_vec = std::vector<int>{2,2,3,3};

    // printv(a_vec);
    // auto l = std::vector<int>{2,7,4,1,8,1};
    auto vec = sol.lastStoneWeight(a_vec);
    std::cout<<vec;
    return 0;
}