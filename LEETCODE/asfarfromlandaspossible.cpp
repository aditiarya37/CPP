#include<iostream>
#include<vector>
using namespace std;
int maxDistance(vector<vector<int>>& grid) {
    int row = grid.size();
    int n = row*row;
    int arr[n];
    int k=0;
    int dis1 = 0, dis2 = 0, dis = 0;
    for(int i=0,a=i+1;i<row-1;i++,a++){
        for(int j=0,b=i+1;j<row-1;j++,b++){
            dis1 = (grid[i][0] - grid[a][0]);
            dis2 = (grid[0][j] - grid[0][b]);
            if(dis1<0){
                dis1 *= -1;
            }
            if(dis2<0){
                dis2 *= -1;
            }
            dis = dis1 + dis2;
            arr[k++] = dis;
        }
        dis = 0;
        dis1 = 0;
        dis2 = 0;
    }
    int max;
    for(int i=0;i<n;i++){
        max = arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    vector<vector<int>> grid = {{1,0,1},{0,0,0},{1,0,1}};
    cout << maxDistance(grid);
    return 0;
}