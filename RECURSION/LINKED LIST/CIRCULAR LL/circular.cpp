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
void deleleNode(node* &tail, int ele){
    if(tail==NULL){
        cout << "Linked List is empty." << endl;
        return;
    }
    else{
        node* temp = tail;
        node* current = temp->next;
        while(current->data!=ele){
            temp = current;
            current = current->next;
        }
        temp->next = current->next;
        if(current==temp){
            tail = NULL;
        }
        if(tail==current){
            tail = temp;
        }
        current->next = NULL;
        delete current;
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
    print(tail);
    insert(tail,10,20);
    print(tail);
    /*insert(tail,10,15);
    print(tail);
    insert(tail,15,17);
    print(tail);
    insert(tail,20,25);
    print(tail);*/
    deleleNode(tail,20);
    print(tail);
    return 0;
}