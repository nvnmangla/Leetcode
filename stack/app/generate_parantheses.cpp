
#include "lib.hpp"


void solve(string P,vector<string>&A,int openN,int closeN,int n){
    
    if ((openN == n) && (closeN ==n)){
        A.push_back(P);
        return;
    }
    else if (openN == closeN){
            P += "(";
            openN++;
            solve(P,A,openN,closeN,n);
    }
    
    else if (openN == n && closeN < n){
        P += ")";
        closeN++;
        solve(P,A,openN,closeN,n);

    }

    else { 
        solve(P  +"(",A,openN+1,closeN,n);
        solve(P  +")",A,openN,closeN+1,n);
    }
    
}

vector<string> generateParenthesis(int n) {
    vector<string> A{};

    solve("",A,0,0,n);
    return A;
        
    }
    
int main(){

    auto strings = generateParenthesis(3);

    for(auto s:strings){
        cout<<s<<" ";
    }



    return 0;
}