#include <iostream>
using namespace std;
void update(int &n)
{
    n++;
}
int main()
{
    // int n = 10;
    // cout << "b4  " << n << endl;
    // update(n);
    // cout << "after  " << n << endl;
    // // cout<<"Pass by reference is used when only 1 block of memeory is used        ";

    /*dynamic memeroy alocation: use case if we want to acces a large memory from the heap memory this way we use the dynamic memeroy allocation*/

    // accesing from heap
    int *num = new int;
    *num = 123;
    cout << num << endl;
    cout << *num << endl;

    // manulayy deteing
    delete num;
    cout << *num;

    // CREATING A ARRAY USING DYNAMIC MEMEROY ALLOCATIONN
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}