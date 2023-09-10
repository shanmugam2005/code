#include<iostream>
using namespace std;
class Flight{
   private:
     int Flight_number;
     string Destination;
     float distance;
     float fuel;
      void calfuel(){
         if(distance<=1000){
            fuel=500;
         }
         else if(1000<distance<=2000){
            fuel=1100;
         }
         else if(distance>2000){
            fuel=2200;
         }
    }
   public:
    void feedinfo(){
        cout<<"Enter the flight number: ";
        cin>>Flight_number;
        cout<<endl;
        cout<<"Enter the Destination: ";
        cin>>Destination;
        cout<<endl;
        cout<<"Enter the distance: ";
        cin>>distance;
        cout<<endl;

    }

    void showinfo(){
       cout<<"The fight number is:"<<Flight_number<<endl;
       cout<<"Destination is:"<<Destination<<endl;
       cout<<"distance is:"<<distance<<endl;
       calfuel();
       cout<<"The fuel of flight is:"<<fuel<<endl;
    }
};

int main(){
    int a;
    cout<<"Enter how many flight details you want to store: ";
    cin>>a;
    cout<<endl;
   Flight details[a];
   for(int i=0;i<a;i++){
    details[i].feedinfo();
    //details[i].calfuel();
    details[i].showinfo();
   }
}


