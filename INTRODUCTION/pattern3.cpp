#include<iostream>
using namespace std;
int main(){
    int i = 1;
    char ch = 65;
    while(i<=3){
        int j = 1;
        while(j<=3){
            cout << ch;
            j++; 
        }
        cout << endl;
        i++;
        ch++;
    }
}