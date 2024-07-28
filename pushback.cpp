#include <iostream>
#include <vector>
using namespace std;
 
// void size_capacity(auto v){
//    for(int i=0;i<=12;i++){
//        cout<<"Size :"<<v.size()<<endl<<"Capacity :"<<v.capacity()<<endl;
//        v.push_back(i);
//    }
// }

// int main(){
//    vector<int> v{1,2,3};
//    size_capacity(v);
 //}

  void size_capacity(auto &v){
    for(int i=0;i<=12;i++){
        cout<<"Size :"<<v.size()<<endl<<"Capacity :"<<v.capacity()<<endl;
        v.push_back(i);
    }
 }

 int main(){
    vector<int> v{1,2,3};
    v.reserve(1000);
    size_capacity(v);
 }
