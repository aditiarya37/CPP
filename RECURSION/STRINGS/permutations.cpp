#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(string str, int index, vector<string> &ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        solve(str,index+1,ans);
        swap(str[index],str[i]);
    }
}
vector<string> permutations(string str){
    vector<string> ans;
    solve(str,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    string str = "abc";
    vector<string> ans = permutations(str);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}