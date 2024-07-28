#include<iostream>
using namespace std;

int main()
{
    int *p= new int;
    *p=90;
    cout<<*p<<endl;

    free(p);
    cout<<*p;
}
