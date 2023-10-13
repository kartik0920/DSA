#include <iostream>
using namespace std;
int lenght(char ch[]){
    int count=0;
    for (int i = 0; ch[i]!=0 ; i++)
    {
        count++;
    }
    
    return count;
}
int main ()
{
    char name[20];
    cout<<"Enter  your name:";
    cin>>name;
    cout<<"The loenght of sring is:"<<lenght(name);
    return 0;
}