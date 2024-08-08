#include<iostream>
using namespace std;
int main(){
    string day;
    cout << "Enter the day: ";
    cin >> day;
    int d;
    if(day=="Monday"){
        d=1;
    }
    if(day=="Tuesday"){
        d=2;
    }
    if(day=="Wednesday"){
        d=3;
    }
    if(day=="Thursday"){
        d=4;
    }
    if(day=="Friday"){
        d=5;
    }
    if(day=="Saturday"){
        d=6;
    }
    if(day=="Sunday"){
        d=7;
    }
    int count=0;
    for(int i=d;i<=366;i+=7){
        count++;
    }
    cout << count;
    return 0;
}