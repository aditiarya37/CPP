#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout << "Size: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int num,ans=0;
    for(int i=0;i<n;i++){
        int count = 0;
        num = arr[i];
        while(num>0){
            num%10;
            count++;
            num /= 10;
        }
        if(count%2==0){
            ans++;
        }
    }
    cout << "Answer: " << ans;
    return 0;
}