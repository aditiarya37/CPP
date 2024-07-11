#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    int x1,x2;
    cout << "Enter the elements to be searched in even and odd arrays: ";
    cin >> x1 >> x2;
    int i1 = binarysearch(even,6,x1);
    int i2 = binarysearch(odd,5,x2);
    cout << "Element in even array is found at " << i1 << " index." << endl;
    cout << "Element in odd array is found at " << i2 << " index.";
    return 0;
}