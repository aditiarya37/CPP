#include<iostream>
using namespace std;
void display(string arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
string middleElement(string arr[], int n){
    int mid = (n-1)/2;
    string midElement = arr[mid];
    for(int i=mid;i<n;i++){
        arr[i] = arr[i+1];
    }
    return midElement;
}
int main(){
    string arr[10];
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    cout << "Enter the books:\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    display(arr,n);
    int freq;
    cout << "Enter the number of times you want to perform the function: ";
    cin >> freq;
    for(int i=0;i<freq;i++,n--){
        cout << "Removed Element: " << middleElement(arr,n) << endl;
        cout << "Bookshelf is: ";
        display(arr,n);
    }
    return 0;
}