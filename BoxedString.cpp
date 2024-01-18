#include "string"
#include <iostream>
#include <vector>
using namespace std;

void BoxedString(vector<string> a){
    int max = 0;
    for(string str:a) {
        if (str.size() > max)
            max = str.size();
    }
    string startend = "****";
    string temp = "";
    for(int i=0; i<max; i++){
        startend += "*";
        temp += " ";
    }
    cout << startend << endl;
    for(int i = 0; i< a.size(); i++){
        cout << "* " << a[i] << temp.substr(0, max-a[i].size()) << " *" << endl;
    }
    cout << startend << endl;
}
int main(){
    vector<string> a = {"Tamid", "is", "cool"};
    BoxedString(a);
}