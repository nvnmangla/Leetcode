#include <iostream>
#include <vector>
#include<algorithm>

#include<map>

using namespace std;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

      vector<vector<string>>sol;
      
      map<string,vector<string>>sol1;
      
      for(int i{};i<strs.size();i++){

        auto str_i = strs[i];
        sort(str_i.begin(),str_i.end());
        if(sol1.find(str_i) != sol1.end()){
            sol1[str_i].push_back(strs[i]);
        }
        else{
            sol1[str_i] = {strs[i]};
        }

        }

      for (auto const& kv:sol1){
        sol.push_back(kv.second);
      }
      return sol;

      }
      



int main(){
  vector<string>a= {"eat","tea","tan","ate","nat","bat"};

  auto sol = groupAnagrams(a);

  cout<<sol.size();

  return 0;
}

