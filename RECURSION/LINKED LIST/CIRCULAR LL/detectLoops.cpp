#include<iostream>
#include<map>
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
bool detectLoop(node* head){
    if(head==NULL){
        return 0;
    }
    node* temp = head;
    map<node*,bool> visited;
    while(temp!=NULL){
        if(visited[temp]){
            return 1;
        }
        visited[temp] = 1;
        temp = temp->next;
    }
    return 0;
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
    if(detectLoop(tail)){
        cout << "Loop Present";
    }
    else{
        cout << "Loop not Present";
    }
    return 0;
}