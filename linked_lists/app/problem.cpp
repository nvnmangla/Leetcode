#include<utils.hpp>
#include<iostream>
#include<vector>

using namespace std;




int main(){
    vector<int>nums = {1,2,3,4,5};
    Node_list nodes = build_list(nums);

    auto curr = nodes.head;
    std::shared_ptr<Node>prev = nullptr;
    view_list(nodes);

    while(curr){  
            nodes.head = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nodes.head;   
        }
    view_list(nodes);

return 0;


}