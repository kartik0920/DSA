#include <iostream>
using namespace std;
int binary(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] < key)
    {
        binary(arr, mid + 1, e, key);
    }
    else
    {
        binary(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter key:";
    cin >> key;

    cout << "The key is present at the foloowing index:" << binary(arr, 0, size - 1, key) << endl;
    return 0;
}