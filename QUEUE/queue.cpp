#include<iostream>
using namespace std;
#define size 5
class queue {
    private:
    int items[size];
    int front, rear;
    public:
    queue(){
        front = -1;
        rear = -1;
    }
    bool empty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool full(){
        if(rear==size-1){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int d){
        if(full()){
            cout << "Queue is full.";
            return;
        }
        else if(empty()){
            front = 0;
            rear = 0;
        }
        else{
            rear++;
        }
        items[rear] = d;
        // cout << "Enqueued element: " << d << endl;
    }
    void dequeue(){
        if(empty()){
            cout << "Queue is already empty.";
            return;
        }
        else if(front==rear){
            // cout << "Dequeued element: " << items[front] << endl;
            front = -1;
            rear = -1;
        }
        else{
            // cout << "Dequeued element: " << items[front] << endl;
            front++;
        }
    }
    void display(){
        if(empty()){
            cout << "Queue is empty.";
            return;
        }
        // cout << "Queue elements: ";
        for(int i=front;i<=rear;i++){
            cout << items[i] << " ";
        }
        cout << endl;
    }
    void status(){
        if(empty()){
            cout << "Queue is empty.";
        }
        else if(full()){
            cout << "Queue is full.";
        }
        else{
            cout << "Queue is partially full.";
        }
    }
};
int main(){
    queue obj;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5);
    obj.display();
    obj.dequeue();
    obj.dequeue();
    obj.display();
    obj.status();
    return 0;
}