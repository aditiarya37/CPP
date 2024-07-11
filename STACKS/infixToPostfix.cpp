#include<iostream>
#include<stack>
#include<string>
using namespace std;
int precedence(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='/' || ch=='*'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixToPostfix(string infix){
    string postfix;
    stack<char> st;
    for(int i=0;i<infix.length();i++){
        char c = infix[i];
        if(isalnum(c)){
            postfix += c;
        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && precedence(c)<=precedence(st.top())){
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }
    return postfix;
}
int main(){
    string infix;
    cout << "Enter infix expression: ";
    getline(cin,infix);
    cout << "Postfix expression: " << infixToPostfix(infix);
    return 0;
}