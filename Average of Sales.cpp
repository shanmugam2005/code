#include<iostream>
using namespace std;
class Sales{
    public:
     int price,quantity;
     void get(){
        cin>>price>>quantity;
     }
     int put(){
         return price*quantity;
     }


};
int main(){
    int size1,m=0,l=0;
    cin>>size1;
    Sales s[size1];
    for(int i=0;i<size1;i++){
        s[i].get();
    }

     for(int i=0;i<size1;i++){
            m+=s[i].put();
             l++;
     }
     cout<<"The total price is "<<m<<"\n";
     cout<<"The average is "<<m/l;

}
