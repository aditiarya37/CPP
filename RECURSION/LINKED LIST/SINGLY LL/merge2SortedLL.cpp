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
    node* solve(node* first, node* second){
        if(first->link==NULL){
            first->link = second;
            return first;
        }
        node* current1 = first;
        node* next1 = current1->link;
        node* current2 = second;
        node* next2 = current2->link;
        while(next1!=NULL && current2!=NULL){
            if((current2->data>=current1->data) && (current2->data<=next1->data)){
                current1->link = current2;
                next2 = current2->link;
                current2->link = next1;
                current1 = current2;
                current2 = next2;
            }
            else{
                current1 = next1;
                next1 = next1->link;
                if(next1==NULL){
                    current1->link = current2;
                    return first;
                }
            }
        }
        return first;
    }
    node* merge(node* first, node* second){
        if(first==NULL){
            return second;
        }
        if(second==NULL){
            return first;
        }
        if(first->data<=second->data){
            start = solve(first,second);
            return start;
        }
        else{
            start = solve(second,first);
            return start;
        }
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
    obj.addElement_beg(8);
    obj.addElement_beg(5);
    obj.addElement_beg(1);
    obj.display();
    linked_list obj1;
    obj1.addElement_beg(6);
    obj1.addElement_beg(3);
    obj1.addElement_beg(2);
    obj1.display();
    node* head1 = obj.getStart();
    node* head2 = obj1.getStart();
    obj.merge(head1,head2);
    obj.display();
    return 0;
}