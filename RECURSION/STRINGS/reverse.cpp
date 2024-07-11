#include<iostream>
using namespace std;
void reverse(string &s, int i, int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main(){
    string s = "Aditi Arya";
    int n = s.length();
    reverse(s,0,n-1);
    cout << s;
    return 0;
}