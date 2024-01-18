#include "string"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BoxedString(vector<string> a){
    size_t m = 0;
    //find longest string
    for(string str:a) {
        m = max(m, str.size());
    }
    string startend = "****";
    string temp = "";
    //create top and bottom of rectangle
    for(int i=0; i<m; i++){
        startend += "*";
        temp += " ";
    }
    cout << startend << endl;
    //create rectangle
    for(int i = 0; i< a.size(); i++)
        cout << "* " << a[i] << temp.substr(0, m-a[i].size()) << " *" << endl;
    cout << startend << endl;
}
int main(){
    vector<string> a = {"Tamid", "is", "cool"};
    BoxedString(a);
}
