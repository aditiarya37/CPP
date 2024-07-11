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
    int getLen(){
        int len = 0;
        node* temp = start;
        while(temp!=NULL){
            len++;
            temp = temp->link;
        }
        return len;
    }
    node* kreverse(node* head, int k){
        // int len = getLen();
        // if(head==NULL || head->link==NULL || k==1 || len<k){
        //     return head;
        // }
        int count = 0;
        node* prev = NULL;
        node* current = head;
        node* forward = NULL;
        while(current!=NULL && count<k){
            forward = current->link;
            current->link = prev;
            prev = current;
            current = forward;
            count++;
        }
        if(forward!=NULL){
            head->link = kreverse(forward,k);
        }
        return prev;
    }
    void reverseLL(int k){
        start = kreverse(start,k);
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
    obj.addElement_beg(10);
    obj.addElement_beg(20);
    obj.addElement_beg(100);
    obj.addElement_beg(40);
    obj.addElement_beg(80);
    obj.addElement_beg(50);
    obj.display();
    obj.reverseLL(3);
    obj.display();
    return 0;
}