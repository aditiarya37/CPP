#include<iostream>
using namespace std;
int main(){
    int n,m;
    int arr[5][5];
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    cout << "Enter the elements of the matrix: " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        cout << "Sum of " << i+1 << " row: " << sum << endl;
        sum = 0;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            sum += arr[i][j];
        }
        cout << "Sum of " << j+1 << " column: " << sum << endl;
        sum = 0;
    }
    return 0;
}