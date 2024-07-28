#include<iostream>
#include<vector>
using namespace std;

 int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    //v.insert (pos,value)
    v.insert(v.begin()+4,100);

    for (auto i: v){
        cout<<i<<" ";
    }
 }
