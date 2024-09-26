#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool prime[n+1];
    int count=0;
    vector<int> ans;
    for(int i=2;i<=n;i++){
        prime[i] = true;
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            count++;
            ans.push_back(i);
            for(int j=2*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}