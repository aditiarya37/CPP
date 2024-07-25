#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    cout << "Enter the elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int el, pos;
    cout << "Enter the element you want to insert: ";
    cin >> el;
    cout << "Enter the position at which you want to insert: ";
    cin >> pos;
    for (int i = 6; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = el;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}