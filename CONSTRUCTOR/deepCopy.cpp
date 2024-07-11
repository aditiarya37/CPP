#include<iostream>
#include<cstring>
using namespace std;
class Hero {
    public:
    char *name;
    int age;
    char level;
    Hero(){
        name = new char[100];
    }
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this->age = temp.age;
        this->level = temp.level;
    }
    void print(){
        cout << "[ " << "Name: " << name << ", " << "Age: " << age << ", " << "Level: " << level << " ]" << endl;
    }
};
int main(){
    Hero h1;
    char nm[6] = "Aditi";
    h1.name = nm;
    h1.age = 18;
    h1.level = 'A';
    cout << "Before change, h1: " << endl;
    h1.print();
    Hero h2(h1);
    cout << "Before change, h2: " << endl;
    h2.print();
    cout << "After change, h1: " << endl;
    h1.name[4] = 'y';
    h1.print();
    cout << "After change, h2: " << endl;
    h2.print();
    return 0;
}