#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void scanArr(int arr[], int size)
{
    cout << "Enter " << size << " this many elemets:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
bool linear(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    cout << "Enter size of the array:";
    cin >> size;
    int *arr = new int[size];
    scanArr(arr, size);
    cout << "Enter the key you want to search:";
    int key;
    cin >> key;
    int ans = linear(arr, size, key);
    printArr(arr, size);
    if (ans)
    {
        cout << "element was found in array" << endl;
    }
    else
    {
        cout << "Element was not found in the array!" << endl;
    }

    cout << *arr + 1 << endl;
    delete[] arr;
    cout << *arr + 1 << endl;
    return 0;
}