//WAP to create a structure named Employee create some instance or variable of it.
#include<iostream>
using namespace std;

struct Employee
{
    int id;
    char ename[20];
    double salary;
};

int main()
{
    Employee e1,e2,e3,*p;
    cout<<"Enter Id, Name, Salary :";
    cin>>e1.id>>e1.ename>>e1.salary;
    cout<<"Dot Operator\n";
    cout<<"Name:"<<e1.ename<<endl;
    cout<<"Id:"<<e1.id<<endl;
    cout<<"Salary:"<<e1.salary<<endl;
    p=&e1;
    cout<<"Name:"<<p->ename<<endl;
    cout<<"Id:"<<p->id<<endl;
    cout<<"Salary:"<<p->salary<<endl;

}
