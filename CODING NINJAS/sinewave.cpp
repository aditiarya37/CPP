#include<iostream> 
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    for(int i=0;i<mCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                cout << arr[j][i] << " ";
            }
        }
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