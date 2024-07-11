#include<iostream>
using namespace std;
int main(){
    int n,arr[10];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout << "Element present at " << i+1 << " index.";
            break;
        }
    }
    return 0;
}