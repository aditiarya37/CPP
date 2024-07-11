#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class LinkedList{
    Node* start;
    public:
    LinkedList(){
        start = NULL;
    }
    void addElement(int d){
        Node* newNode = new Node();
        newNode->data = d;
        newNode->next = NULL;
        Node* current = start;
        while(current->next!=NULL){
            current = current->next;
        }
        current->next = newNode;
    }
    Node* getHead(){
        return start;
    }
};
class Function{
    public:
        Node* intersect_ll(Node* L1, Node *L2){
            Node dummy(0);
            Node* tail = &dummy;
            Node* temp1 = L1;
            Node* temp2 = L2;
            Node* start;
            start = NULL;
            Node* ans;
            while(temp1->next!=NULL || temp2->next!=NULL){
                if(temp1->data==temp2->data){
                    ans = new Node;
                    ans->data = temp1->data;
                    ans->next = start;
                    start = ans;
                    temp2 = temp2->next;
                }
                else{
                    temp1 = temp1->next;
                }
            }
        return ans;
    }
    void display(Node* start){
        Node* cur = start;
        while(cur!=NULL){
            cout << cur->data << " ";
            cur = cur->next;
        }
    }
};
int main(){
    LinkedList L1;
    L1.addElement(1);
    L1.addElement(2);
    L1.addElement(3);
    L1.addElement(4);
    L1.addElement(7);
    LinkedList L2;
    L2.addElement(2);
    L2.addElement(4);
    L2.addElement(6);
    L2.addElement(7);
    Function obj;
    Node* intersection = obj.intersect_ll(L1.getHead(),L2.getHead());
    obj.display(intersection);
    return 0;
}