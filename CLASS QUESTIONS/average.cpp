#include<iostream>
using namespace std;
int main(){
    int m1, m2, m3,m4,m5;
    cout << "Enter the marks: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    int avg = (m1+m2+m3+m4+m5)/5;
    cout << "Average Marks: " << avg;
    return 0;
}