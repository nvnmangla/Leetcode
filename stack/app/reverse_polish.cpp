#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;


int evalRPN(vector<string>&tokens){
    
    string expressions = "+/*-";
    int i{};
    auto stack = std::vector<int>{};
    for (auto token:tokens){
        if (expressions.find(token) == string::npos){
            stack.push_back(stoi(token));
        }
        else{
            int j = stack.back();
            stack.pop_back();
            int k = stack.back();
            stack.pop_back();
            switch (expressions.find(token))
            {
            case 0:
                stack.push_back(j+k);
                break;
            case 3:
                stack.push_back(k-j);
                break;

            case 2:
                stack.push_back(k*j);
                break;
            case 1:
                stack.push_back(k/j);
                break;
            default:
                break;
            }
        } 
        i++;
    }

    return stack[0];

}

int main(){
    vector<string> tokens = {"2","1","+","3","*"};
    std::cout<<evalRPN(tokens);
    return 0;
}