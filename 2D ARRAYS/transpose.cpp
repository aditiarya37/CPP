#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr[0].size();j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}