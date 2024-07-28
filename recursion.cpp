#include<iostream>
using namespace std;
 
int fact(int n){
    if (n==1 || n==0)
    return 0;
    else if(n<0)
    {
        cout<<"We can't find factorial of Negative number";
        return 0;
    }
    else 
        return n*fact(n-1);
} 
int main()
{
    int result=fact(5);
    cout<<result;
}
