#include <iostream> 
#include<string>
using namespace std;
int countCoins(string str){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='+'){
            count++;
        }
    }
    return count;
}
int hotelBookings(string queries[], int n) {
    string str;
    int count = 0;
    for(int i=0;i<n;i++){
        str = queries[i];
        count += countCoins(str);
    }
    return count;
}
int main(){
    string arr[10];
    int n;
    cout << "Enter the size: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Coins: " << hotelBookings(arr,n);
    return 0;
}
