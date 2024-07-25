#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {23, 64, 12, 75, 43};
    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;
    cout << "Element found at: " << linearSearch(arr, 5, key);
    return 0;
}