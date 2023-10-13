#include <iostream>
using namespace std;
bool linear(int arr[], int size, int key)
{
    if (size < 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    int ans = linear(arr + 1, size - 1, key);
}
int main()
{
    int arr[] = {1, 5, 2, 9, 7, 452, 2, 6, 4, 2, 3, 541, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter key:";
    cin >> key;
    int found = linear(arr, size, key);
    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is not present";
    }
    return 0;
}