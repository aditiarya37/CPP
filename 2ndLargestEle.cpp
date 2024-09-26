#include<iostream>
using namespace std;
int main(){
    int arr[5] = {54,13,75,34,12};
    int i=1;
    while(i<5){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
    cout << arr[3];
    return 0;
}