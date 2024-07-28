#include<iostream>
#include<array>
using namespace std;

// NOTE:- in Array,Vector,String we have indexing because element can stored at contigioud memory so we can easily iterate
// with the help of index but, in set, map, there is no indexing so we have to use STL iterator.
int main()
{
    array<int, 5> a1{12,45,65,54,78};
    array<int, 5> a2{10,11,99,101,89};

    // array<int, 5> :: iterator p;

    //for(p=a1.begin();p!=a1.end();p++){
    //    cout<<*p<<" ";
    //}

    for(auto p=a1.begin();p!=a1.end();p++){
        cout<<*p<<" ";
    }
    
    cout<<" "<<endl;
    cout<<"Range Based Loop"<<endl;

    for(auto i : a2){
     cout<<i<<" ";
   }
}
