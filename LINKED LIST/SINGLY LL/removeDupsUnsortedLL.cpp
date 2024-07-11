#include<iostream>
#include<map>
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
        while(current!=NULL && current->link!=NULL){
            node* temp = current;
            while(temp->link!=NULL){
                if(current->data==temp->link->data){
                    node* nodeToDelete = temp->link;
                    temp->link = temp->link->link;
                    delete(nodeToDelete);
                }
                else{
                    temp = temp->link;
                }
            }
            current = current->link;
        }
        return head;
    }
    node* removeDupsWithMaps(node* head){
        if(head==NULL){
            return NULL;
        }
        node* temp = head;
        unordered_map<int, bool> visited;
        node* prev = NULL;
        while(temp!=NULL){
            if(visited[temp->data]){
                node* nodeToDelete = temp;
                prev->link = temp->link;
                temp = temp->link;
                delete(nodeToDelete);
            }
            else{
                visited[temp->data] = 1;
                prev = temp;
                temp = temp->link;
            }
        }
        return head;
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
    obj.addElement_beg(70);
    obj.addElement_beg(40);
    obj.addElement_beg(70);
    obj.addElement_beg(20);
    obj.addElement_beg(70);
    obj.addElement_beg(20);
    obj.display();
    node* head = obj.getStart();
    obj.removeDupsWithMaps(head);
    obj.display();
    return 0;
}