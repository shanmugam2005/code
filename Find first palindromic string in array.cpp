#include<bits/stdc++.h>
using namespace std;
string firstPalindrome(vector<string>& words) {
           for(auto &it:words){
               string m="";
               for(int j=it.size()-1;j>=0;j--){
                   m+=it[j];
               }
               if(m==it){
                   return it;
                   break;
               }
           }
           return "";
    }
int main(){
    int n;
    cin>>n;
    vector<string>a;
    string m;
    for(int i=0;i<n;i++){
        cin>>m;
        a.push_back(m);
    }
    cout<<firstPalindrome(a);

}
