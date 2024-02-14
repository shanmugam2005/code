 #include<bits/stdc++.h>
 using namespace std;
 vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>s(nums.size(),0);
        int k=0,m=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                s[k]=nums[i];
                k+=2;
            }
            else if(nums[i]<0){
                s[m]=nums[i];
                m+=2;
            }
        }
        for(auto &it:s){
            cout<<it<<" ";
        }
    }
int main(){

   int a,b;
   cin>>a;
   vector<int>s;
   for(int i=0;i<a;i++){
    cin>>b;
    s.push_back(b);
   }
   rearrangeArray(s);
}
