#include<iostream>
using namespace std;
int main(){
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;
    switch(1){
        case 1:
            Rs100 = amount/100;
            amount %= 100;
            cout << "No. of Rs 100 notes: " << Rs100 << endl;
        case 2:
            Rs50 = amount/50;
            amount %= 50;
            cout << "No. of Rs 50 notes: " << Rs50 << endl;
        case 3:
            Rs20 = amount/20;
            amount %= 20;
            cout << "No. of Rs 20 notes: " << Rs20 << endl;
        case 4:
            Rs1 = amount/1;
            amount %= 1;
            cout << "No. of Rs 1 notes: " << Rs1;
    }
    return 0;
}