#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool prime[n];
    int count=0;
    for(int i=2;i<n;i++){
        prime[i] = true;
    }
    for(int i=2;i<n;i++){
        if(prime[i]==true){
            count++;
            for(int j=2*i;j<n;j+=i){
                prime[j] = false;
            }
        }
    }
    cout << count;
    return 0;
}