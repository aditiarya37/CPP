#include<iostream>
using namespace std;
class node{
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
void insertAtBeg(node* &head, node* &tail, int d){
    if(head==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* newNode = new node(d);
        newNode->next = head;
        head = newNode;
    }
}
void insertAtEnd(node* &tail, node* &head, int d){
    if(tail==NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* newNode = new node(d);
        tail->next = newNode;
        tail = newNode;
    }
}
void insertAtPos(node* &head, node* &tail, int pos, int d){
    if(pos==1){
        insertAtBeg(head,tail,d);
        return;
    }
    node* temp = head;
    int i=1;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    if(temp->next==NULL){
        insertAtEnd(tail,head,d);
        return;
    }
    node* newNode = new node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteNodeByData(node* &head, node* &tail, int d){
    if(head->data==d){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* temp = head;
        node* prev = NULL;
        while(temp->next!=NULL){
            if(temp->data!=d){
                prev = temp;
                temp = temp->next;
            }
            else{
                break;
            }
        }
        if(temp->next==NULL){
            tail = prev;
        }
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}
void deleteNode(node* &head, node* &tail, int pos){
    if(pos==1){
        node* temp = head;
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
            tail = temp;
        }
        temp->next = current->next;
        current->next = NULL;
        delete current;
    }
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
    node* head = NULL;
    node* tail = NULL;
    insertAtBeg(head,tail,15);
    print(head);
    insertAtBeg(head,tail,20);
    print(head);
    insertAtEnd(tail,head,25);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    insertAtPos(head,tail,4,100);
    print(head);
    deleteNodeByData(head,tail,20);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;    
    // deleteNode(head,tail,5);
    // print(head);
    // cout << "Head: " << head->data << endl;
    // cout << "Tail: " << tail->data << endl;
    return 0;
}