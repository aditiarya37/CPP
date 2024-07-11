#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int *col = new int[n];
    int **arr = new int*[n];
    cout << "Enter the number of columns for each row: " << endl;
    for(int i=0;i<n;i++){
        cout << "For " << i+1 << " row: ";
        cin >> m;
        col[i] = m;
        arr[i] = new int[m];
        cout << "Enter the elements: " << endl;
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing the array: " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<col[i];j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    delete []col;
    return 0;
}