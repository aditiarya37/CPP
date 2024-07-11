#include<iostream>
#define size 100
using namespace std;
class stack{
    private:
    int top;
    int st[size];
    public:
    stack(){
        top = -1;
    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isFull(){
        if(top==size-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int d){
        if(isFull()){
            cout << "The stack is already full.";
        }
        st[++top] = d;
    }
    void pop(){
        if(isEmpty()){
            cout << "The stack is already empty.";
        }
        int popped = st[top--];
    }
    void status(){
        if(isEmpty()){
            cout << endl << "Stack is empty.";
        }
        else if(isFull()){
            cout << endl << "Stack is full.";
        }
        else{
            cout << endl << "Stack is partially full.";
        }
    }
    void display(){
        if(isEmpty()){
            cout << "The stack is already empty.";
        }
        for(int i=0;i<=top;i++){
            cout << st[i] << " ";
        }
    }
};
int main(){
    stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.pop();
    obj.pop();
    obj.display();
    obj.status();
    return 0;
}