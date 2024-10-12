#include<bits/stdc++.h>
using namespace std;
string longestprefixlength(vector<string>&str){
for(int i=0;i<str[0].size();i++){
          for(auto it:str){
                    if(i>str.size()||it[i]!=str[0][i]){
                              return str[0].substr(0,i);
                    }
          }
}
return str[0];
}
int main(){
          vector<string>str{"ravi","rahul","ramu"};
         string ans= longestprefixlength(str);
         for(auto it:ans ){
          cout<<it;
         }
}