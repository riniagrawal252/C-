#include<iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> arr;
    arr.fill(90);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
