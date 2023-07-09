#include<utils.hpp>
#include<iostream>
#include<vector>

   
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    ListNode* ans = new ListNode(0);

    ListNode* curr = ans;
    int carry{};
    while(l1 || l2 || carry != 0) {
    
        int digit1 =  l1  ? l1->val : 0;
        int digit2 =  l2  ? l2->val : 0;
        int sum = digit1 + digit2 + carry;
        
        carry = (sum - sum%10)/10;
        sum = sum % 10;

        ListNode* temp = new ListNode(sum);
        
        curr->next = temp;
        curr = curr->next;
        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }
    

    return ans->next;

}   


int main(){

    vector<int>l_1 = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    vector<int>l_2 = {5,6,4};

    auto l1 = build_l(l_1);
    auto l2 =  build_l(l_2); 

    auto l3 = addTwoNumbers(l1,l2);

    auto v1 = listToVector(l3);

    for(auto i:v1){
        cout<<i<<' ';
    }

    

    return 0;
}