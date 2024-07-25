#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter the position on which you want to delete the element: ";
    cin >> pos;
    for (int i = pos; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}