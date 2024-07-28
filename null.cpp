#include<iostream>
using namespace std;

int main()
{
    int *p=NULL;
    cout<<"Address holds by Pointer--->"<<p<<endl;
    int num=100;
    p=&num;
    cout<<"Address holds by Pointer--->"<<p<<endl;
    cout<<"Address holds by Pointer--->data--->"<<*p;
    cout<<"concept is called Dereferencing";                   //* = dereference operator or indirection 
                                                              //& =  address of 
}
