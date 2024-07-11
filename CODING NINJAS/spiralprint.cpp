#include<iostream> 
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int n, int m){
    vector<int> ans;
    int count = 0;
    int total = n*m;
    int strRow = 0;
    int strCol = 0;
    int endRow = n-1;
    int endCol = m-1;
    while(count<total){
        for(int i=strCol;i<=endCol;i++){
            ans.push_back(arr[strRow][i]);
            // cout << arr[strRow][i] << " ";
            count++;
        }
        strRow++;
        for(int i=strRow;i<=endRow;i++){
            ans.push_back(arr[i][endCol]);
            // cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;
        for(int i=endCol;i>=strCol;i--){
            ans.push_back(arr[endRow][i]);
            // cout << arr[endRow][i] << " ";
            count++;
        }
        endRow--;
        for(int i=endRow;i>=strRow;i--){
            ans.push_back(arr[i][strCol]);
            // cout << arr[i][strCol] << " ";
            count++;
        }
        strCol++;
    }
    for(int i=0;i<total;i++){
        cout << ans[i] << " ";
    }
}
int main(){
    vector<vector<int>> arr(3,vector<int>(4));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    wavePrint(arr,3,4);
    return 0;
}