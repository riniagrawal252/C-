#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {

    vector<string> v = {"mom", "and", "dad", "ww", "okay"},v1;


    cout << "Vector elements: ";
    for (auto  words: v) {
        string temp;
        for(int i=words.size()-1;i>=0;i--)
            temp.push_back(words[i]);
        if(temp==words && temp.size()>2)
            v1.push_back(temp);
            cout<< v1<< " ";
    }
    
}
