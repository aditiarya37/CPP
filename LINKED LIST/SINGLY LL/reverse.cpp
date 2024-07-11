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
    void reverse(node* &start, node* current, node* prev){
        if(current==NULL){
            start = prev;
            return;
        }   
        node* forward = current->link;
        reverse(start,forward,current);
        current->link = prev;
    }
    void reverse3(node* &head){
        if(head==NULL || head->link==NULL){
            return;
        }
        node* lilHead = head->link;
        reverse3(lilHead);
        head->link->link = head;
        head->link = NULL;
        head = lilHead;
    }
    void reverseLL(){
        // WAY 1
        node* prev = NULL;
        node* current = start;
        reverse(start,current,prev);
        // WAY 2
        // if(start==NULL || start->link==NULL){
        //     return;
        // }
        // node* prev = NULL;
        // node* current = start;
        // node* forward = NULL;
        // while(current!=NULL){
        //     forward = current->link;
        //     current->link = prev;
        //     prev = current;
        //     current = forward;
        // }
        // start = prev;
        // WAY 3 
        // reverse3(start);
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
// void linked_list :: reverse(node* &start, node* current, node* prev){
//     if(current==NULL){
//         start = prev;
//         return;
//     }
//     node* forward = currnet->link;
//     reverse(start,forward,current);
//     current->link = prev;
// }
int main(){
    linked_list obj;
    obj.addElement_beg(10);
    obj.addElement_beg(20);
    obj.addElement_beg(100);
    obj.addElement_beg(40);
    obj.display();
    obj.reverseLL();
    obj.display();
    return 0;
}