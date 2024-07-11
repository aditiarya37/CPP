#include<iostream>
#include<string>
using namespace std;
class car {
    public:
    string carModel;
    int carYear;
    void takingInpt();
    void printingOutput();
};
int main(){
    car c1;
    c1.takingInpt();
    c1.printingOutput();
    return 0;
}
void car :: takingInpt(){
    cout << "Enter car model name: ";
    getline(cin,carModel);
    cout << "Enter car model year: ";
    cin >> carYear;
}
void car :: printingOutput(){
    cout << "Your car model is " << carModel << " and the year it was made in is " << carYear;
}
