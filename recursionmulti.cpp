#include <iostream>
using namespace std;

void Table(int n, int m){
    if(m>10){
        return;
    }
    cout<<n<<"x"<<m<<"="<<n*m<<endl;
    Table(n,m+1);
}

int main(){
    int number;
    cout<<"Enter the number whose multiplication table you want to print: ";
    cin>>number;
    cout<<"Multiplication table of "<<number<<"is: "<<endl;
    Table(number, 1);
    
}
