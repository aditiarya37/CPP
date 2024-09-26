#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<string> removeParantheses(string &str){
    map<char,vector<int>> charToVector;
    string s1 = str;
    string s2 = str;
    vector<string> ans;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('){
            charToVector['('].push_back(i);
        }
        else{
            charToVector[')'].push_back(i);
        }
    }
    // int mx = 0;
    // char mxChar = ' ';
    vector<int> x = charToVector['('];
    vector<int> y = charToVector[')'];
    // for(map<char,vector<int>>::iterator it=charToVector.begin();it!=charToVector.end();it++){
    //     // char key = it->first;
    //     vector<int> values = it->second;
    //     int size = values.size();
    // }
    // int index1 = charToVector[mxChar][mx-1];
    // for(int i=0;i<s1.length();i++){
    //     s1[index1] = s1[index1+1];
    // }
    // ans.push_back(s1);
    // int index2 = charToVector[mxChar][0];
    // for(int i=0;i<s2.length();i++){
    //     s2[index2] = s2[index2+1];
    //     index2++;
    // }
    // ans.push_back(s2);
    int size1 = x.size();
    int size2 = y.size();
    int i=0,j=0;
    int indexes1, indexes2;
    while(i<size1 && j<size2){
        if(x[i]>y[j]){
            int temp = j;
            while(temp<size2){
                s1[temp] = s1[temp+1];
                temp++;
            }
            j++;
        }
        else{
            i++,j++;
        }
    }
    while(i<size1){
        int temp = i;
        while(temp<size1){
            s2[temp] = s2[temp+1];
            temp++;
        }
        i++;
    }
    while(j<size2){
        int temp = j;
        while(temp<size2){
            if(temp==size2-1){
                s2[temp] = '\0';
            }
            else{
                s2[temp] = s2[temp+1];
                temp++;
            }
        }
        j++;
    }
    ans.push_back(s1);
    ans.push_back(s2);
    return ans;
}
int main(){
    string str = "()())";
    vector<string> ans = removeParantheses(str);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}