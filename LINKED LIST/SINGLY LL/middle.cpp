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
    int getLen(){
        int len = 0;
        node* temp = start;
        while(temp!=NULL){
            len++;
            temp = temp->link;
        }
        return len;
    }
    void displayFromMid(int ans){
        node* temp = start;
        int i=0;
        while(i<ans){
            temp = temp->link;
            i++;
        }
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
    void getMiddle(){
        node* temp = start;
        if(temp==NULL || temp->link==NULL){
            return;
        }
        if(temp->link->link==NULL){
            temp = temp->link;
        }
        node* fast = temp->link;
        node* slow = temp;
        while(fast!=NULL){
            fast = fast->link;
            if(fast!=NULL){
                fast = fast->link;
            }
            slow = slow->link;
        }
        temp = slow;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
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
    // obj.addElement_beg(200);
    obj.display();
    obj.getMiddle();
    // int len = obj.getLen();
    // int ans = len/2;
    // obj.displayFromMid(ans);
    return 0;
}