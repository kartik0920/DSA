#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a' and ch<='z'){
        cout<<"It is lower";
    }
    else if(ch>='A' and ch<='Z'){
        cout<<"It is upper";
    }
    else if(ch>='0' and ch<='9'){
        cout<<"It is number";
    }
    return 0;
}