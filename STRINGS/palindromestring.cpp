#include<iostream> 
#include<string>
#include<cctype>
using namespace std;
char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}
int len(string s){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkPalindrome(string s)
{
    int i=0;
    int j=len(s)-1;
    while(i<=j){
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        if(toLower(s[i])==toLower(s[j])){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    cout << checkPalindrome(s);
    return 0;
}