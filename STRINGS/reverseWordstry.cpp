#include<iostream>
#include<string>
using namespace std;
string reverseWords(string s, int n){
    int i=0;
    while(i<n){
        swap(s[i++],s[n--]);
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
    string s;
    int j;
    cout << "Enter a string: ";
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        for(s[j]==' ';s[j]!='\0';j++){
            cout << reverseWords(s,j-1);
        }
    }
    //reverseWords(s);
    return 0;
}