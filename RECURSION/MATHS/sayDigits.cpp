#include<iostream>
using namespace std;
void sayDigits(int n, string arr[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    n /= 10;
    sayDigits(n,arr);
    cout << arr[digit] << " ";
}
int main(){
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sayDigits(n,arr);
    return 0;
}