#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i[arr] << " ";
    }
    cout << endl;
}
void insertion(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
// void insertion(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {

//         for (int j = i; j >= 0; j--)
//         {
//             int temp = arr[j];
//             if (arr[j] > temp)
//             {
//                 arr[j] = temp;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
// }
int main()
{
    int arr[] = {2, 34, 1, 213, 5, 12, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, size);
    printArr(arr, size);
    return 0;
}