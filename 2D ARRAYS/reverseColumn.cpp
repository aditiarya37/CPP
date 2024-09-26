#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,4,7},{2,5,8},{3,6,9}};
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0,j=arr.size()-1;i<j;i++,j--){
        for(int k=0;k<arr.size();k++){
            swap(arr[k][i],arr[k][j]);
        }
    }
    cout << "After reversing: " << endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}