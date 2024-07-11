#include<iostream>
using namespace std;
void largestRowSum(int arr[][3], int n, int m){
    int sum = 0;
    for(int i=0;i<3;i++){
        int sum1=0;
        for(int j=0;j<3;j++){
            sum1 += arr[i][j];
        }
        if(sum1>sum){
            sum = sum1;
        }
    }
    cout << "Sum: " << sum;
}
int main(){
    int arr[3][3];
    cout << "Enter the elements: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    largestRowSum(arr,3,3);
    return 0;
}