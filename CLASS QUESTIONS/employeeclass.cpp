#include<iostream>
using namespace std;
class employee {
    public:
    char name[100],des[5];
    int age;
    double salary;
    void takingInput(){
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter designation: ";
        cin >> des;
        cout << "Enter your salary: ";
        cin >> salary;
    }
    void printingOutput(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " << des << endl;
        cout << "Salary: " << salary;
    }
};
int main(){
    employee n1;
    n1.takingInput();
    n1.printingOutput();
}