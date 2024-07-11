#include<iostream>
using namespace std;
double precision(int num, int ans){
    double factor = 1;
    double temp = ans;
    for(int i=1;i<=3;i++){
        factor/=10;
        for(double j=temp;j*j<num;j+=factor){
            temp = j;
        }
    }
    return temp;
}
int squareRoot(int num, int s, int e, int ans=-1){
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    int sq = mid*mid;
    if(sq==num){
        return mid;
    }
    if(sq>num){
        return squareRoot(num,s,mid-1,ans);
    }
    else if(sq<num){
        ans = mid;
        return squareRoot(num,mid+1,e,ans);
    }
}
int main(){
    int num;
    cout << "Number: ";
    cin >> num;
    int temp = squareRoot(num,0,num);
    cout << "Square Root: " << precision(num,temp);
    return 0;
}