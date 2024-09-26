#include<iostream>
#include<vector>
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
    bool checkArr(vector<int> arr){
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++,e--;
        }
        return 1;
    }
    bool checkPalindrome(node* head){
        vector<int> arr;
        node* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp = temp->link;
        }
        return checkArr(arr);
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
    obj.addElement_beg(40);
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