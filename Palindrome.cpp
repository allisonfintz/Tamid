#include "string"
#include <iostream>
using namespace std;

bool isPalindrome(const string& a){
    for(int i = a.size()-1; i >= 0; --i){
        //check if input is string
        if(!isalnum(a[i]) || !isalnum(a[a.size()-1-i])){
            cout << "Error" << endl;
            return false;
        }
        //check palindrome
        if(tolower(a[i]) != tolower(a[a.size()-1-i]))
            return false;
    }
    return true;
}

int main(){
    //take user input
    cout << "Please enter a string: " << endl;
    string input;
    getline(cin, input);
    if(isPalindrome(input)){
        cout << input << " is a Palindrome!";
    }else{
        cout << input << " is a not Palindrome!";
    }
}
