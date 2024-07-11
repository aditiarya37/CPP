#include<iostream>
using namespace std;
int getLen(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(name[i++],name[j--]);
    }
    cout << name;
}
int main(){
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    int len = getLen(name);
    reverse(name,len);
    return 0;
}