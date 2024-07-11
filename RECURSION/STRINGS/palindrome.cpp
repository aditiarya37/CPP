#include<iostream>
using namespace std;
bool palindrome(string s, int i, int j){
    if(i>j){
        return 1;
    }
    if(s[i]!=s[j]){
        return 0;
    }
    else{
        return palindrome(s,i+1,j-1);
    }
}
int main(){
    string str = "afifat";
    int n = str.length();
    if(palindrome(str,0,n-1)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    return 0;
}