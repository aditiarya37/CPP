#include<iostream>
using namespace std;
int main(){
    int arr1[3][3], arr2[3][3];
    cout << "Enter the elements of the first array: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second array: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr2[i][j];
        }
    }
    int ans[3][3] = {0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "The answer is: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}