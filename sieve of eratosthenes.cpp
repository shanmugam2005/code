#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans[n];
  for(int i=2;i<=n;i++){
    ans[i]=i;
  }
  for(int i=2;i<=sqrt(n);i++){
    if(ans[i]!=0){
        int j=i*i;
        while(j<=n){
            ans[j]=0;
            j+=i;
        }
    }

  }
  cout<<"The prime numbers"<<endl;
  for(int i=2;i<=n;i++){
    if(ans[i]!=0){
        cout<<ans[i]<<" ";
    }
  }
}
