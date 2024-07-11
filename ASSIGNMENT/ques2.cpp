#include<iostream>
using namespace std;
void sumPairs(int arr[], int n, int s){
    for(int i=0;i<n;i++){\
        for(int j=i+1;j<n-i-1;j++){
            if(arr[i]+arr[j]==s){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    cout << "Enter a number: ";
    cin >> num;
    sumPairs(arr,10,num);
    return 0;
}