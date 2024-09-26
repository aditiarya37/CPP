#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* prev;
    node* next;
    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtBeg(node* &head, int d){
    node* newNode = new node(d);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtEnd(node* &tail, int d){
    node* newNode = new node(d);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void insertAtPos(node* &head, node* &tail, int d, int pos){
    if(pos==1){
        insertAtBeg(head,d);
        return;
    }
    int i=1;
    node* temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    if(temp->next==NULL){
        insertAtEnd(tail,d);
        return;
    }
    node* newNode = new node(d);
    newNode->next = temp->next;
    temp->next = newNode;
    temp->next->prev = newNode;
    newNode->prev = temp;
}
void deleteNode(node* &head, node* &tail, int pos){
    if(pos==1){
        node* temp = head;
        head->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* temp = NULL;
        node* current = head;
        int i=1;
        while(i<pos){
            temp = current;
            current = current->next;
            i++;
        }
        if(current->next==NULL){
            temp->next = current->next;
            tail = temp;
            current->prev = NULL;
            delete current;
        }
        else{
            current->prev = NULL;
            temp->next = current->next;
            current->next = NULL;
            delete current;
        }
    }
}
int calLen(node* &head){
    int len = 0;
    node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node* newNode = new node(10);
    node* head = newNode;
    node* tail = newNode;
    print(head);
    insertAtBeg(head,15);
    print(head);
    insertAtEnd(tail,20);
    print(head);
    insertAtPos(head,tail,25,1);
    print(head);
    deleteNode(head,tail,4);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << calLen(head) << endl;
    return 0;
}