#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    int choice;
    cout << "Enter the size of the size: ";
    cin >> size;
    cout << "Enter the elements: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter your choice: \n1) To display\n2) To insert\n3) To delete\n4) To search" << endl;
    cin >> choice;
    switch(choice){
        case 1:
        for(int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
        break;
        case 2:
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
        int m;
        cout << "Enter the index of the element which you want to be deleted: ";
        cin >> m;
        for(int i=m;i<6;i++){
            arr[i] = arr[i+1];
        }
        for(int i=0;i<4;i++){
            cout << arr[i] << endl;
        }
        break;
        case 4:
        int x;
        cout << "Enter the element to be searched: ";
        cin >> x;
        int ans = -1;
        for(int i=0;i<size;i++){
            if(arr[i]==x){
                ans = i;
            }
        }
        cout << "Element found at index: " << ans;
    }
    return 0;
}