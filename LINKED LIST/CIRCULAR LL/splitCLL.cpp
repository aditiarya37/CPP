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
node* splitCLL(node* head){
    if(head==NULL || head->next==head){
        return NULL;
    }
    node* slow = head;
    node* fast = head->next;
    while(fast!=head && fast->next!=head){
        slow = slow->next;
        fast = fast->next->next;
    }
    node* firstHalf = head;
    node* secondHalf = slow->next;
    slow->next = firstHalf;
    node* temp = secondHalf;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = secondHalf;
    return secondHalf;
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
    insert(tail,25,35);
    insert(tail,35,45);
    print(tail);
    node* second = splitCLL(tail);
    print(tail);
    print(second);
    return 0;
}