
//wAP to find the string which is not aplhanumeric
//vector of string ={"Apple23", "Banana", "Pinneapple", "Orange"}

#include<iostream>
#include<vector>
using namespace std;
    
int main(){
    vector<string> v{"Apple23", "Banana", "Pinneapple45", "Orange"}, v1;

    for(auto i:v){
        int flag=0;
        for(auto j:i){
            if(isdigit (j)){
                flag=1;
                break;
            }
        }
        if(flag==0)
        v1.push_back(i);
    }
    for(auto i:v1)
      cout<<i<<" ";
}

    
