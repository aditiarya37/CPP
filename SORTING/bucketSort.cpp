#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<float> &bucket){
    for(int i=0;i<bucket.size();i++){
        int temp = bucket[i];
        int j=i-1;
        while(j>=0 && bucket[j]>temp){
            bucket[j+1] = bucket[j];
            j--;
        }
    }
}
void bucketSort(float arr[], int n){
    vector<float> bucket[n];
    for(int i=0;i<n;i++){
        int index = n*arr[i];
        bucket[index].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        insertionSort(bucket[i]);
    }
    int index1 = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[index1++] = bucket[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    float arr[10] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
    bucketSort(arr,10);
    return 0;
}
