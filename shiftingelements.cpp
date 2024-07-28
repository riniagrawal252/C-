#include <iostream>
#include <vector>
using  namespace std;

void move_zero (auto & v){
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            v[j]=v[i];
            j++;
        }
        }
        while(j<v.size()){
            v[j]=0;
            j++;
    }
}

    int main(){
        vector<int> v{0,1,0,3,12};
        move_zero(v);

        for(auto i:v){
            cout<<i<<" ";
        }
    }
