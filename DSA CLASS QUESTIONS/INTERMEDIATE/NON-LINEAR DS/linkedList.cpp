#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class linkedList{
    node* start = NULL;
    public:
    void insertAtBeg(int d){
        node* newNode = new node(d);
        newNode->next = start;
        start = newNode;
    }
    void insertAtEnd(int d){
        node* newNode = new node(d);
        newNode->next = NULL;
        node* curr = start;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void insertAtPos(int d, int pos){
        node* newNode = new node(d);
        int i=1;
        node* curr = start;
        while(i<pos-1){
            curr = curr->next;
            i++;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
    void deleteElement(int d){
        node* curr = start;
        node* temp = start;
        while(curr->next!=NULL){
            if(curr->data!=d){
                temp = curr;
                curr = curr->next;
            }
            else{
                break;
            }
        }
        temp->next = curr->next;
        delete curr;
    }
    void print(){
        node* temp = start;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    linkedList obj;
    int choice;
    while(choice!=6){
        cout << "Enter you choice: " << endl;
        cout << "1) Insert element at beginning\n2) Insert element at end\n3) Insert element at a position\n 4) Delete an element\n 5) Print the list\n6) To stop" << endl;
        cin >> choice;
        int ele,pos;
        switch(choice){
            case 1:
            cout << "Enter the element: ";
            cin >> ele;
            obj.insertAtBeg(ele);
            break;
            case 2:
            cout << "Enter the element: ";
            cin >> ele;
            obj.insertAtEnd(ele);
            break;
            case 3:
            cout << "Enter the element and pos: ";
            cin >> ele >> pos;
            obj.insertAtPos(ele,pos);
            break;
            case 4:
            cout << "Enter the element: ";
            cin >> ele;
            obj.deleteElement(ele);
            break;
            case 5:
            obj.print();
            break;
            case 6:
            break;
        }
    }
    return 0;
}