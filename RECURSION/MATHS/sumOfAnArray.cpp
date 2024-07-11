#include<iostream>
using namespace std;
int calSum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum = arr[0] + calSum(arr+1,n-1);
    return sum;
}
int main(){
    int arr[5] = {6,2,7,3,13};
    cout << "Sum: " << calSum(arr,5);
    return 0;
}