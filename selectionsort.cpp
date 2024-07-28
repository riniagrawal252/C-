#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
    int temp,index;
    for(int i=0;i<n-1;i++){
        index =i;
        for(int j=i;j<n;j++){
            if(a[j]<a[index])
            index=j;
        }
        temp=a[i]; 
        a[i]=a[index];
        a[index]=temp;
    }
}
int main()
{
    int arr[5]={23,-4,2,9,-22};
    selection_sort(arr,5);
    
    for(int i=0;i<5;i++)
     cout<<arr[i]<<" ";
}
