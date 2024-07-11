#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* link;
};
class linkedList{
    node* start;
    public:
    linkedList(){
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
        node* current = start;
        /*while(current->data!=d){
            current = current->link;
        }*/
        int i=1;
        while(i<pos-1){
            current = current->link;
            i++;
        }
        newNode->link = current->link;
        current->link = newNode;
    }
    void deleteElement(int pos){
        if(pos==1){
            start = start->link;
        }
        node* current = start;
        node* temp = start;
        int i=1;
        while(i<pos){
            temp = current;
            current = current->link;
            i++;
        }
        /*while(current->link!=NULL){
            if(current->data!=d){
                temp = current;
                current = current->link;
            }
            else{
                break;
            }
        }*/
        temp->link = current->link;
    }
    void search(int ele){
        node* temp = start;
        int i = 1;
        while(temp!=NULL){
            if(temp->data==ele){
                cout << "Element found at: " << i << endl;
                cout << "Address: " << temp;
            }
            temp = temp->link;
            i++;
        }
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
    linkedList obj;
    int choice;
    int value,pos,ele;
    while(choice!=6){
        cout << "Enter the operations you want to perform: \n";
        cout << "1) Add element in the beginning\n2) Add element in between\n3) Add element at the end\n4) Delete an element\n5) Search an element\n6) To display\n";
        cin >> choice;
        switch(choice){
            case 1:
            cout << "Enter the element: ";
            cin >> value;
            obj.addElement_beg(value);
            break;
            case 2:
            cout << "Enter the element: ";
            cin >> value;
            cout << "Enter the position at which you want to insert: ";
            cin >> pos;
            obj.addElement_bet(value,pos);
            break;
            case 3:
            cout << "Enter the element: ";
            cin >> value;
            obj.addElement_end(value);
            break;
            case 4:
            cout << "Enter the position: ";
            cin >> value;
            obj.deleteElement(value);
            break;
            case 5:
            cout << "Enter the element you want to insert: ";
            cin >> ele;
            obj.search(ele);
            break;
            case 6:
            obj.display();
            break;
        }
    }
    return 0;
}