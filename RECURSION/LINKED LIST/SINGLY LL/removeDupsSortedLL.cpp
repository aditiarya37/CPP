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
    node* removeDups(node* head){
        if(head==NULL){
            return NULL;
        }
        node* current = head;
        while(current->link!=NULL){
            if(current->data==current->link->data){
                node* next_next = current->link->link;
                node* nodeToDelete = current->link;
                delete(nodeToDelete);
                current->link = next_next;
            }
            else{
                current = current->link;
            }
        }
        return NULL;
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
    obj.addElement_beg(40);
    obj.addElement_beg(40);
    obj.addElement_beg(40);
    obj.addElement_beg(20);
    obj.addElement_beg(20);
    obj.addElement_beg(10);
    obj.display();
    node* head = obj.getStart();
    obj.removeDups(head);
    obj.display();
    return 0;
}