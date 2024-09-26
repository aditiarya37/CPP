#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int n = str.length();
    string str1, str2;
    str1.resize(n/2);
    str2.resize(n/2);
    for(int i=0;i<n/2;i++){
        str1[i] = str[i];
    }
    int k=0;
    for(int i=(n/2);str[i]!='\0';i++){
        str2[k++] = str[i];
    }
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;
    return 0;
}c