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
    node* getStart(){
        return start;
    }
    node* getMid(node* head){
        node* slow = head;
        node* fast = head->link;
        while(fast!=NULL && fast->link!=NULL){
            slow = slow->link;
            fast = fast->link->link;
        }
        return slow;
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
    bool checkPalindrome(node* head){
        if(head->link==NULL){
            return 1;
        }
        node* mid = getMid(head);
        node* temp = mid->link;
        mid->link = reverse(temp);
        node* head1 = head;
        node* head2 = mid->link;
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return 0;
            }
            head1 = head1->link;
            head2 = head2->link;
        }
        temp = mid->link;
        mid->link = reverse(temp);
        return 1;
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
    obj.addElement_beg(20);
    obj.addElement_beg(20);
    obj.addElement_beg(406);
    obj.addElement_beg(70);
    obj.display();
    node* head = obj.getStart();
    if(obj.checkPalindrome(head)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}