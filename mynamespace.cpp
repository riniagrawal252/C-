#include<iostream>
using namespace std;

namespace A{
    class Employee{
        int eid;
        string name;
    public:
       Employee(int a,string b){
        eid=a;
        name=b;
       }
       void display(){
        cout<<"Name: "<<name<<endl<<"Eid: "<<eid<<endl;
    }
};
}
