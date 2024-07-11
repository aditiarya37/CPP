#include<iostream>
using namespace std;
int main(){
    int arr[6] = {20,25,28,29,30};
    int arr2[5] = {10,20,30,40,50};
    int choice;
    cout << "Enter your choice: " << endl;
    cout << "1) Traversing an array\n2) Insetion Operation\n3) Deletion Operation\n";
    cin >> choice;
    switch(choice){
        case 1:
        // Traversing an Array
        for(int i=0;i<6;i++){
            cout << arr[i] << endl;
        }
        break;
        case 2:
        // Insertion Operation
        int n;
        cout << "Enter the index on which you want to insert the element: ";
        cin >> n;
        int el;
        cout << "Enter the element which you want to insert: ";
        cin >> el;
        for(int i=6;i>n;i--){
            arr[i] = arr [i-1];
        }
        arr[n] = el;
        for(int i=0;i<6;i++){
            cout << arr[i] << endl;
        }
        break;
        case 3:
        // Deletion Operation
        int m;
        cout << "Enter the index of the element which you want to be deleted: ";
        cin >> m;
        for(int i=m;i<6;i++){
            arr[i] = arr[i+1];
        }
        for(int i=0;i<4;i++){
            cout << arr[i] << endl;
        }
    }
    return 0;
}