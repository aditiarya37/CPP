#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* link;
};
class linked_list{
    node* start;
    public:
    linked_list(){
        start = NULL;
    }
    void addElement_beg(int d){
        node* newNode = new node;
        newNode->data = d;
        newNode->link = start;
        start = newNode;
    }
    node* getStart(){
        return start;
    }
    void insert(node* &tail,node* temp){
        tail->link = temp;
        tail = temp;
    }
    void sortList(node* head){
        if(head==NULL){
            return;
        }
        node* zeroHead = new node;
        node* zeroTail = zeroHead;
        node* oneHead = new node;
        node* oneTail = oneHead;
        node* twoHead = new node;
        node* twoTail = twoHead;
        node* temp = head;
        while(temp!=NULL){
            int val = temp->data;
            if(val==0){
                insert(zeroTail,temp);
            }
            else if(val==1){
                insert(oneTail,temp);
            }
            else if(val==2){
                insert(twoTail,temp);
            }
            temp = temp->link;
        }
        if(oneHead->link!=NULL){
            zeroTail->link = oneHead->link;
        }
        else{
            zeroTail->link = twoHead->link;
        }
        oneTail->link = twoHead->link;
        twoTail->link = NULL;
        head = zeroHead->link;
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        start = head;
    }
    void display(){
        node* temp = start;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};
int main(){
    linked_list obj;
    obj.addElement_beg(2);
    obj.addElement_beg(1);
    obj.addElement_beg(0);
    obj.addElement_beg(2);
    obj.addElement_beg(0);
    obj.addElement_beg(1);
    obj.display();
    node* head = obj.getStart();
    obj.sortList(head);
    obj.display();
    return 0;
}