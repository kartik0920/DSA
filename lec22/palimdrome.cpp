#include <iostream>
using namespace std;
char Tolower(char ch){
    if(ch>='a' && ch<='z'){
        return ch; 
    }
    else{

        return ch+ 'a' - 'A';
    }
}
int lenght(char ch[]){
    int count=0;
    for(int i=0;ch[i]!=0;i++){
        count++;
    }        
    return count;
}
bool Ispalindrome(char ch[],int l){
    int s=0,e=l-1;
    while(e>s){
        if(Tolower(ch[e--])!=Tolower(ch[s++])){
            return false;
        }
    }
    return true;
}
int main (){
    char str1[20];
    cout<<"Enter string:";
    cin>>str1;
    if(Ispalindrome(str1,lenght(str1))){
        cout<<"It is Palimdrome!";
    }
    else{
        cout<<"Not a palimdrome!";
    }
    return 0;
}