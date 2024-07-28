#include<iostream>
using namespace std;

int partition(int a[],int lower,int upper){
    int pivot=a[lower];
    int start=lower,end=upper,temp;

   while (start<end)
   {
    while(a[start]<=pivot)
          start++;
    while(a[start]>pivot)
          end--;
    if(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    }
}
     temp=pivot;
     a[lower]=a[end];
     a[end]=temp;
     return end;
}

void quick_sort(int a[],int lower,int upper){
    if(lower<upper){
        int pos=partition(a,lower,upper);
        quick_sort(a,lower,pos-1);
        quick_sort(a,pos+1,upper);
    }
}
int main()
{
    int arr[6]={2,3,5,7,21,9};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick_sort(arr,0,5);
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
