#include<iostream>
using namespace std;
long long int sqrtInt(int n){
    int low = 0;
    int high = n;
    long long int ans = -1;
    long long int mid = low + (high-low)/2;
    while(low<=high){
        long long int sq = mid*mid;
        if(sq>n){
            high = mid-1;
        }
        else if(sq<n){
            ans = mid;
            low = mid+1;
        }
        if(sq==n){
            return mid;
        }
        mid = low + (high-low)/2;
    }
    return ans;
}
double morePrecision(int num, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0;i<precision;i++){
        factor /= 10;
        for(double j=ans;j*j<num;j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int num;
    cout << "Number: ";
    cin >> num;
    int tempSol = sqrtInt(num);
    cout << "Answer: " << morePrecision(num,3,tempSol);
    return 0;
}