// Problem 49

#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {


      vector<vector<string>>sol; // Vector of strings
      
      map<string,vector<string>>sol1; // Map of strings
      
      for(int i{};i<strs.size();i++){

        auto str_i = strs[i];
        // Sorting every string
        sort(str_i.begin(),str_i.end());
        if(sol1.find(str_i) != sol1.end()){
            sol1[str_i].push_back(strs[i]);
        }
        else{
            sol1[str_i] = {strs[i]};
        }
        }

      // Putting only values in the list  
      for (auto const& kv:sol1){
        sol.push_back(kv.second);
      }
      return sol; // return solution
        
    }