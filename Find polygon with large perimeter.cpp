#include<bits/stdc++.h>
using namespace std;
long long largestPerimeter(vector<int>& nums) {
      long long int y=0;
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
          y+=nums[i];
      }
      for(int i=nums.size()-1;i>=0;i--){
          if(nums[i]<y-nums[i]){
              return y;
          }
          y-=nums[i];
      }
      return -1;
    }
int main(){
     int a,b;
     cin>>a;
     vector<int>c;
     for(int i=0;i<a;i++){
        cin>>b;
        c.push_back(b);
     }
     cout<<largestPerimeter(c);
}
