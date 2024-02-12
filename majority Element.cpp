#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {

        map<int,int>k;
        int l=0;
        for(int i=0;i<nums.size();i++){
            k[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(k[nums[i]]>(nums.size()/2)){
               l=nums[i];
               break;
            }
        }
        return l;
    }
int main(){
   int a,b;
   cin>>a;
   vector<int>s;
   for(int i=0;i<a;i++){
    cin>>b;
    s.push_back(b);
   }
  cout<<majorityElement(s);
}
