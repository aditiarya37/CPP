#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout << "Enter the array: ";
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }
    int flag = 0;
    for(int i=0;i<4;i++){
        int num = arr[i];
        for(int j=i+1;j<=4;j++){
            int num1 = arr[j];
            if(num<num1){
                for(int k=j+1;k<=4;k++){
                    if(num1>arr[k] && num<arr[k]){
                        flag = 1;
                        break;
                    }
                }
            }
        }
    }
    if(flag){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}