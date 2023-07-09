#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::max;

int lengthOfLongestSubstring(string s) {
    
    auto n = s.length();

    string substring{};
    int ll{};

    if (s.length() < 2 ){
        return s.length();
    }

    int i = 0;
    while(i<n){
        if (substring.find(s[i]) != std::string::npos){
            substring.erase(substring.begin());
            continue;
        } 
        substring += s[i];
        i++;
        ll =  (substring.length() > ll) ? substring.length() : ll;
        }

        
        return ll;

    }


int main(){
    string s = "dvdf";
    cout<<lengthOfLongestSubstring(s)<<"\n";
    return 0;
}