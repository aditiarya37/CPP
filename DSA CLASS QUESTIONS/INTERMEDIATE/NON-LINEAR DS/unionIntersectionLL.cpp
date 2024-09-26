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
    void addElement_end(int d){
        node* newNode = new node;
        newNode->data = d;
        newNode->link = NULL;
        node* current = start;
        while(current->link!=NULL){
            current = current->link;
        }
        current->link = newNode;
    }
    void addElement_bet(int d, int pos){
        node* newNode = new node;
        newNode->data = d;
        node* temp = start;
        /*while(temp->data!=ele){
            temp = temp->link;
        }*/
        int i=1;
        while(i<pos-1){
            temp = temp->link;
            i++;
        }
        newNode->link = temp->link;
        temp->link = newNode;
    }
    /*void deleteElement(int d){
        node* current = start;
        while(current->data!=d){
            current = current->link;
        }
        node* temp = start;
        while(temp->link!=current){
            temp = temp->link;
        }
        temp->link = current->link;
    }*/
    void deleteElement(int d){
        node* current = start;
        node* temp = start;
        while(current->link!=NULL){
            if(current->data!=d){
                temp = current;
                current = current->link;
            }
            else{
                break;
            }
        }
        temp->link = current->link;
    }
    node* getStart(){
        return start;
    }
    void intersection(node* head){
        
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
    obj.addElement_end(100);
    obj.addElement_bet(40,3);
    obj.deleteElement(20);
    obj.display();
    linked_list obj1;
    obj1.addElement_beg(100);
    obj1.addElement_beg(200);
    obj1.addElement_end(1000);
    obj1.addElement_bet(400,3);
    obj1.deleteElement(200);
    obj1.display();
    linked_list ans;
    node* head = ans.getStart();
    obj.intersection(head);
    return 0;
}