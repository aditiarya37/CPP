#include<iostream>
#include<stack>
using namespace std;
bool validParanthesis(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                int top = st.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str = "[({}]";
    bool ans = validParanthesis(str);
    cout << ans;
    return 0;
}