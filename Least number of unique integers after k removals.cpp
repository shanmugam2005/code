#include<bits/stdc++.h>
using namespace std;
int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>l;
        for(int i=0;i<arr.size();i++){
            l[arr[i]]++;
        }
        multimap<int,int>m;
        for(auto &it:l){
            m.insert({it.second,it.first});
        }
        int s=m.size();
        for(auto &it:m){
            if(it.first<=k){
                if(it.first==1){
                    s--;
                }
                else{
                    if(it.first<=k){
                        cout<<it.first<<" ";
                        s--;
                    }
                }
                k-=it.first;
            }
        }
        return s;

    }
int main(){
   int a,b,k;
   cin>>a;
   vector<int>l;
   for(int i=0;i<a;i++){
    cin>>b;
    l.push_back(b);
   }
   cin>>k;
   cout<<findLeastNumOfUniqueInts(l,k);

}
