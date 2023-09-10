#include<iostream>
using namespace std;
class matrix{
 public:
    static int Row,Col;
     matrix(int a,int b){
       Row=a;
       col=b;
     }
     int arr[Row][Col];
     void getinput(){
         for(int i=0;i<Rows;i++){
                for(int j=0;j<Cols;j++){
                    cin>>arr[i][j];
                }
                cout<<endl;
         }
     }
     void ouput(){
         for(int i=0;i<rows;i++){
            for(int j=0;j<Cols;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
         }
     }
};
int main(){
   int row,col;
  cin>>row>>col;
  matrix a(row,col);
  a.getinput();
  a.display();
}
