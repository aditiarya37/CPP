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
        int i=1;
        while(i<pos-1){
            temp = temp->link;
            i++;
        }
        newNode->link = temp->link;
        temp->link = newNode;
    }
    void display(){
        node* temp = start;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
};
int main(){
    linked_list obj;
    int data,choice,pos;
    while(choice!=4){
        cout << "Choose operation: " << endl;
        cout << "1) Add Element at beginning.\n2) Add element at end.\n3) Add element in between.\n4) To stop\n";
        cin >> choice;
        switch(choice){
            case 1:
            cout << "Enter the element: ";
            cin >> data;
            obj.addElement_beg(data);
            break;
            case 2:
            cout << "Enter the element: ";
            cin >> data;
            obj.addElement_end(data);
            break;
            case 3:
            cout << "Enter the element: ";
            cin >> data;
            cout << "Enter the position: ";
            cin >> pos;
            obj.addElement_bet(data,pos);
            break;
            case 4:
            cout << "Displaying the linked list: \n";
            obj.display();
            break;
        }
    }
    return 0;
}