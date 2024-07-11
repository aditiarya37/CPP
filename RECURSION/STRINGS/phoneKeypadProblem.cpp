#include<iostream>
#include<vector>
using namespace std;
void solve(string digits, string output, int index, vector<string> &ans, string mapping[]){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    int num = digits[index] - '0';
    string value = mapping[num];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits){
    vector<string> ans;
    if(digits.length()==0){
        return ans;
    }
    string output;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,0,ans,mapping);
    return ans;
}
int main(){
    string digits = "235";
    vector<string> ans = letterCombinations(digits);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}