#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int dis;
    cin >> dis;
    int count = 0;
    for(int i=0;i<n;i++){
        if(dis%arr[i]==0){
            count++;
        }
    }
    cout << count;
    return 0;
}