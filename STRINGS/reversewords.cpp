#include<iostream>
#include<string>
using namespace std;
string reverseWords(string s){
    int i=0;
    int n = s.length();
    while(i<n-1){
        swap(s[i++],s[--n]);
    }
    return s;
}
/*void reverseWords(string s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            int st=0;
            int e=i-1;
            while(st<e){
                swap(s[st++],s[e--]);
            }
        }
        i++;
    }
    cout << s;
}*/
int main(){
    string s,temp;
    int i=0,j=0;
    cout << "Enter a string: ";
    getline(cin,s);
    while(s[i]!='\0'){
        if(s[i]==' '){
            temp.append(reverseWords(s.substr(j,i-j)));
            temp.append(" ");
            j = i+1;
        }
        i++;
    }
    if(s[i]=='\0'){
        temp.append(reverseWords(s.substr(j,i)));
    }
    cout << temp;
    //reverseWords(s);
    return 0;
}