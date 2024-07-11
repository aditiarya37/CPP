#include<iostream>
#define size 5
using namespace std;
class node{
    public:
    int data;
    node* link;
};
class stack{
    private:
    node* start;
    int top;
    public:
    stack(){
        top=-1;
        start = NULL;
    }
    bool isEmpty(){
        return start == NULL;
    }
    bool isFull(){
        return top == size-1;
    }
    void push(int d){
        if(isFull()){
            cout << "Stack is already full.";
        }
        node* newNode = new node;
        newNode->data = d;
        newNode->link = start;
        start = newNode;
        top++;
    }
    void pop(){
        if(isEmpty()){
            cout << "Stack is already empty.";
        }
        /*node* current = start;
        node* temp = start;
        int i = 1;
        while(i<top){
            temp = current;
            current = current->link;
            i++;
        }
        temp->link = current->link;*/
        start = start->link;
    }
    void display(){
        node* temp = start;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
};
int main(){
    stack obj;
    obj.push(5);
    obj.push(10);
    obj.push(15);
    obj.push(20);
    obj.push(25);
    obj.pop();
    obj.display();
    return 0;
}