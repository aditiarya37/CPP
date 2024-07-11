#include<iostream>
using namespace std;
void reverse(string &s, int n, int i){
    if(i>(n-i)){
        return;
    }
    swap(s[i],s[n-i]);
    reverse(s,n,i+1);
}
int main(){
    string s = "Aditi Arya";
    int n = s.length();
    reverse(s,n-1,0);
    cout << s;
    return 0;
}