#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
struct node *head = NULL;
void insert(int n){
    struct node *new_node = new node;
    new_node -> data = n;
    new_node -> next = head;
    head = new_node;
}
void display(){
    // struct node *temp = head;
    while(head!=NULL){
        cout << head -> data << endl;
        head = head -> next;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    return 0;
}