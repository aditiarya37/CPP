#include<iostream>
#include<math.h>
using namespace std;
int main(){
class Solution {
public:
    int maximum69Number (int num) {
        int arr[4],i=0;
        while(num>0){
            arr[i] = num%10;
            num /= 10;
            i++;
        }
        for(int j=i-1;j>=0;j--){
            if(arr[j]==6){
                arr[j] = 9;
                break;
            }
        }
        int n=0,l=0;
        for(int k=0;k<i;k++,l++){
            n = n + arr[k]*pow(10,l);
        }
        return n;
    }
};
}