#include<iostream>
#include<string>
using namespace std;
bool compareCounts(int count, int cn2){
    return count==cn2;
}
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    // string temp;
    int cn2=0;
    int flag = 0;
    for(int i=n-1;i>=0;i--){
        // temp = str[i];
        // str = str.substr(0,n-1-i);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count--;
            cn2++;
        }
        if(compareCounts(count,cn2)){
            flag = 1;
            break;
        }
        // temp.append(temp);
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}