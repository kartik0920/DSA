#include <iostream>
using namespace std;
int lenght(char ch[]){
    int count=0;
    for(int i=0;ch[i]!=0;i++){
        count++;
    }
    return count;
}
void reverse(char ch[],char l){
    int s=0,e=l-1;
    while(e>s){
        swap(ch[e--],ch[s++]);
    
    }
    cout<<"Reverse string will be:"<<ch;
}
int main ()
{
    char name[20];
    cout<<"Enter the string:";
    cin>>name;
    reverse(name,lenght(name));
    return 0;
}