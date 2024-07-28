#include<iostream>
//#include <cstdlib>
using namespace std;

int main()
{
    int *p=new int;
    *p=90;
    cout<<"Address of new block :"<<p<<endl;
    cout<<"Data in new block :"<<p<<endl;
     
     free(p);                                                 //memory block free
     cout<<"Dangling pointer\n"; 
     cout<<"Address of new block :"<<p<<endl;
    cout<<"Data in new block :"<<p<<endl;
}
