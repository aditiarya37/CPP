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
node* floydDetectLoop(node* head){
    if(head==NULL){
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast =  fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            cout << "Loop present at: " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
node* getStartingNode(node* head){
    if(head==NULL){
        return NULL;
    }
    node* slow = head;
    node* intersection = floydDetectLoop(head);
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
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
    // if(floydDetectLoop(tail)!=NULL){
    //     cout << "Loop Present";
    // }
    // else{
    //     cout << "Loop not Present";
    // }
    node* ans = getStartingNode(tail);
    cout << "Loop present at: " << ans->data << endl;
    return 0;
}