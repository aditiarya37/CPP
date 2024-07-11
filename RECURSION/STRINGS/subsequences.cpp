#include<iostream>
#include<vector>
using namespace std;
void solve(string s, string output, int index, vector<string> &ans){
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    solve(s,output,index+1,ans);
    char ch = s[index];
    output.push_back(ch);
    solve(s,output,index+1,ans);
}
vector<string> subsequences(string s){
    vector<string> ans;
    string output;
    solve(s,output,0,ans);
    return ans;
}
int main(){
    string str = "abc";
    int n = str.length();
    vector<string> ans = subsequences(str);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}