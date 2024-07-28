#include<iostream>
using namespace std;

void bubble(int a[],int size){         //size=5
    int temp;
    
    for(int i=0;i<size-1;i++) {          //number of passes
        for(int j=0;j<size-i-1;j++){    //sizes-i-1
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[5]={3,44,-5,56,2};
    for(int i=0;i<5;i++)
       cout<<arr[i]<<" ";

    bubble(arr,5);
    cout<<endl;
    for(int i=0;i<5;i++)
      cout<<arr[i]<<" ";

}
