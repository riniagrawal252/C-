#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,100,5,6,7,8,9,10};

    //find formula =find(start,end,value)--->return position
    auto pos=find(v.begin(),v.end(),100 );
    cout<<pos-v.begin()<<endl;
    
}
