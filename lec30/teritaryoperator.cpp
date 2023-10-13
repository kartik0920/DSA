#include <iostream>
using namespace std;
int main ()
{
    int small,a,b;
    cout << "Enter a";
    cin >> a;
    cout<<"Enter b:";
    cin >> b;
    small=(a<b)? a : b;
    cout << "small is " << small << endl;
    return 0;
}