#include <iostream>
using namespace std;
// this function will return the character as it is if the character is in lowercase otherwise it will convert it into lowercase then return it.
char toLowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char a[],int n){
    int s=0;
    int e= n-1;
    while (s<=e){
        if(toLowercase(a[s])!=toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[], int n){ 
    int s=0; // s = start
    int e=n-1; // e = end
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){ 
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main() {
   char name[20];
   cout<<"Enter your name: "<<endl; 
   cin>>name;
   cout<<"your name is ";
   cout<<name<<endl;
   int len = getLength(name);
   cout<<"Length: "<<len<<endl;
   
   reverse(name,len);
   cout<<"Your reversed name is: "<<name<<endl;
   
   cout<<"Palindrome or not :"<<checkPalindrome(name, len)<<endl;
   
   cout<<"CHARACTER IS "<<toLowercase('b')<<endl;
   cout<<"CHARACTER IS "<<toLowercase('D')<<endl;
    return 0;
}
