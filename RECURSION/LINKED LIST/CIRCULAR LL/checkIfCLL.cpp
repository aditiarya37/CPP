#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insert(node* &tail, int ele, int d){
    if(tail==NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        node* current = tail;
        while(current->data!=ele){
            current = current->next;
        }
        node* newNode = new node(d);
        newNode->next = current->next;
        current->next = newNode;
    }
}
bool checkCLL(node* head){
    if(head==NULL){
        return 1;
    }
    node* temp = head;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==head){
        return 1;
    }
    if(temp==NULL){
        return 0;
    }
}
void print(node* tail){
    if(tail==NULL){
        cout << "List is empty." << endl;
        return;
    }
    node* temp = tail;
    do{
        cout <<  tail->data << " ";
        tail = tail->next;
    }while(tail!=temp);
    cout << endl;
}
int main(){
    node* tail = NULL;
    insert(tail,5,10);
    insert(tail,10,20);
    insert(tail,20,25);
    insert(tail,25,30);
    insert(tail,30,35);
    print(tail);
    if(checkCLL(tail)){
        cout << "Circular Linked List.";
    }
    else{
        cout << "Not a Circular Linked List.";
    }
    return 0;
}