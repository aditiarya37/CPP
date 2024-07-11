#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* link;
    node(int val){
        this->data = val;
        this->link = NULL;
    }
};
class linked_list{
    node* start;
    public:
    linked_list(){
        start = NULL;
    }
    void addElement_beg(int d){
        node* newNode = new node(d);
        newNode->link = start;
        start = newNode;
    }
    node* getStart(){
        return start;
    }
    node* reverse(node* head){
        node* current = head;
        node* prev = NULL;
        node* next = NULL;
        while(current!=NULL){
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    void insertAtTail(node* &head, node* &tail, int val){
        node* temp = new node(val);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->link = temp;
            tail = temp;
        }
    }
    node* add(node* first, node* second){
        int carry = 0;
        node* ansHead = NULL;
        node* ansTail = NULL;
        while(first!=NULL || second!=NULL || carry!=0){
            int val1 = 0;
            if(first!=NULL){
                val1 = first->data;
                first = first->link;
            }
            int val2 = 0;
            if(second!=NULL){
                val2 = second->data;
                second = second->link;
            }
            int sum = carry + val1 + val2;
            int digit = sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
        }
        return ansHead;
    }
    void addLL(node* first, node* second){
        first = reverse(first);
        second = reverse(second);
        node* ans = add(first,second);
        ans = reverse(ans);
        if(ans!=NULL && ans->data==0){
            node* temp = ans;
            ans = ans->link;
            delete temp;
        }
        if(ans==NULL){
            ans = new node(0);
        }
        start = ans;
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
    obj.addElement_beg(0);
    obj.addElement_beg(9);
    obj.addElement_beg(8);
    obj.addElement_beg(9);
    obj.addElement_beg(8);
    obj.addElement_beg(0);
    obj.display();
    linked_list obj1;
    obj1.addElement_beg(1);
    obj1.display();
    node* head1 = obj.getStart();
    node* head2 = obj1.getStart();
    obj.addLL(head1,head2);
    obj.display();
    return 0;
}