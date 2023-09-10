#include<iostream>
using namespace std;
class Member{
    public:
    string name;
    int age,address,salary;
    unsigned long long int phone;
    void get(){
        cout<<"Enter";
       cin>>name>>age>>phone>>address>>salary;
    }
    void printsalary(){
      cout<<"The salary of the member: "<<salary;
    }
    void display1(){
       cout<<name<<age<<phone<<address<<salary;
    }


};
class Employee: private Member{
    public:
    string specialization;
    void getE(){
        get();
        cout<<"enter";
    cin>>specialization;
    }
    void display2(){
        display1();
    cout<<specialization;
    }
};

class Manager: private Member{
    public:
  string department;
  void getM(){
      get();
      cout<<"Enter";
  cin>>department;
  }
  void display(){
      display1();
    cout<<department;
    printsalary();
  }
  //printsalary();

};
int main(){
     Manager s;
     Employee m;
     m.getE();
     m.display2();
     s.getM();
     s.display();
     //s.printsalary();

}
