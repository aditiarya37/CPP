#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSafe(int x, int y, vector<vector<int>> &arr, int n, vector<vector<int>> &visited){
    if((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y]==0) && (arr[x][y]==1)){
        return 1;
    }
    else{
        return 0;
    }
}
void solve(vector<vector<int>> &arr, int n, int x, int y, vector<vector<int>> &visited, vector<string> &ans, string path){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    int newx = x+1;
    int newy = y;
    if(isSafe(newx,newy,arr,n,visited)){
        path.push_back('D');
        solve(arr,n,newx,newy,visited,ans,path);
        path.pop_back();
    }
    newx = x-1;
    newy = y;
    if(isSafe(newx,newy,arr,n,visited)){
        path.push_back('U');
        solve(arr,n,newx,newy,visited,ans,path);
        path.pop_back();
    }
    newx = x;
    newy = y+1;
    if(isSafe(newx,newy,arr,n,visited)){
        path.push_back('R');
        solve(arr,n,newx,newy,visited,ans,path);
        path.pop_back();
    }
    newx = x;
    newy = y-1;
    if(isSafe(newx,newy,arr,n,visited)){
        path.push_back('L');
        solve(arr,n,newx,newy,visited,ans,path);
        path.pop_back();
    }
    visited[x][y] = 0;
}
vector<string> ratInAMaze(vector<vector<int>> &arr, int n){
    vector<string> ans;
    if(arr[0][0]==0){
        return ans;
    }
    vector<vector<int>> visited = arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }
    int x = 0, y = 0;
    string path = "";
    solve(arr,n,x,y,visited,ans,path);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<vector<int>> arr{{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n = 4;
    vector<string> ans = ratInAMaze(arr,n);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}