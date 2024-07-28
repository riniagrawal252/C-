#include<iostream>
using namespace std;

int main()
{
   auto p=[] (int a, int b){
    if(a>b)
         return a;
    else 
         return b;
   }; 

   cout<<p(34,54); 
}
