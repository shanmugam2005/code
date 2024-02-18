#include<bits/stdc++.h>
using namespace std;
void divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans(nums.size()/3);
        sort(nums.begin(),nums.end());
        int u=0,l=1;
        for(int i=0;i<nums.size();i+=3){
                 if(nums[i+2]-nums[i]>k){
                        l=0;
                       cout<<"()";
                       break;
                 }
                 else{
                     ans[u]={nums[i],nums[i+1],nums[i+2]};
                 }
                 u++;
        }
        if(l){
        for(auto &it:ans){
            for(auto &l:it){
                cout<<l<<" ";
            }
            cout<<endl;
        }
        }
}
int main(){
  int a,b,k;
  cin>>a;
  vector<int>s;
  for(int i=0;i<a;i++){
    cin>>b;
    s.push_back(b);
  }
  cin>>k;
  divideArray(s,k);

}
