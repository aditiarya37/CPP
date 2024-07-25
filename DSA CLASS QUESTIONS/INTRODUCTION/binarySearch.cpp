#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {3, 5, 31, 35, 66};
    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;
    cout << "Element found at: " << binarySearch(arr, 5, key);
    return 0;
}