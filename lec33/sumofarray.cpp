#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int ans = arr[0] + sum(arr + 1, size - 1);
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = sum(arr, size);
    cout << "Sum of the array is " << ans;
    return 0;
}   