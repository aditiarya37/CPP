#include<iostream>
using namespace std;
enum DataType {
    INT,
    FLOAT
};
class node {
    public:
    int data;
    float val;
    node*prev;
    node*next;
    DataType type;
    node(){
        prev=NULL;
        next=NULL;
        type=INT;
    }
};
class DLL {
    public:
    node*head;
    node*tail;
    DLL(){
        head=NULL;
        tail=NULL;
    }
    void addInt(int d){
        node*newNode=new node;
        newNode->data=d;
        newNode->type=INT;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        return;
    }
    void addFloat(float d){
        node*newNode=new node;
        newNode->val=d;
        newNode->type=FLOAT;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        return;
    }
    void display(){
        node*temp=head;
        while(temp!=NULL){
            if(temp->type==INT){
                cout<<temp->data<<" ";
            }
            else{
                cout<<temp->val<<" ";
            }
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    DLL obj;
    obj.addInt(2);
    obj.addInt(3);
    obj.addFloat(12.5);
    obj.addFloat(7.8);
    obj.display();
    return 0;
}