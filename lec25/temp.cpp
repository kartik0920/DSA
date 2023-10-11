#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "Adress of a is  " << &a;
    cout << "\nWhile the ptr is " << ptr;
    cout << "\nPtr points to this value " << *ptr<<endl; // Fot accesing the pointer value
    (*ptr)++;
    cout << a;
    return 0;
}