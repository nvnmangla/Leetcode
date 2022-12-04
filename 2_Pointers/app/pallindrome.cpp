#include <iostream>
#include <vector>
#include<algorithm>
    
using namespace std;


int main(){
    std::string s{".a"};   
    auto it1 = s.begin();
    auto it2 = s.end()-1;
    while(it1 < it2){
        cout<<"it1 = "<<*it1<<" "<<"it2 = "<<*it2<<'\n';
      while(!isalnum(*it1) && (it1<it2)){
        it1++;

      }

      while(!isalnum(*it2) && (it1<it2)){
        // s.erase(it2);
        it2--;

      }

      if(tolower(*it1) == tolower(*it2) && (it1<it2)){
        it1++;
        it2--;

      }
      else{
        break;
        cout<<"false";
      }
    }


  if (tolower(*it1) == tolower(*it2)){
    cout<<"true";}
    else{cout<<"false";}


    
    return 0;
}
