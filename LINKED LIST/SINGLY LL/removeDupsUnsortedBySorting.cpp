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
    node* split(node* head){
        node* slow = head;
        node* fast = head->link;
        while(fast!=NULL && fast->link!=NULL){
            slow = slow->link;
            fast = fast->link->link;
        }
        node* temp = slow->link;
        slow->link = NULL;
        return temp;
    }
    node* merge(node* head, node* second){
        if(head==NULL){
            return second;
        }
        if(second==NULL){
            return head;
        }
        if(head->data<=second->data){
            head->link = merge(head->link,second);
            return head;
        }
        else{
            second->link = merge(head,second->link);
            return second;
        }
    }
    node* mergeSort(node* head){
        if(head==NULL || head->link==NULL){
            return head;
        }   
        node* second = split(head);
        head = mergeSort(head);
        second = mergeSort(second);
        return merge(head,second);
    }
    node* removeDups(node* head){
        if(head==NULL){
            return head;
        }
        head = mergeSort(head);
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
    obj.mergeSort(head);
    obj.removeDups(head);
    obj.display();
    return 0;
}