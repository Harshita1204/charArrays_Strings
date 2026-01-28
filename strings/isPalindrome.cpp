#include <iostream>
using namespace std;
<<<<<<< HEAD
// concept of a palindrome is that a reversed string should be also equal to the actual string , for example : Harsh , reversed -> hsrah , so it is not a palindrpme.  noon , reversed -> noon , this is a palindrome 
bool checkPalindrome(char a[],int n){
    // this function will consider uppercase and lowercase as two different characters
    int s=0;
    int e= n-1;
    while (s<=e){
        if(a[s]!=a[e]){ // this condition will check the first and last element , if they are equal then the else condition will work and it will keep checking until the s<=e, otherwise it will return false that is 0
=======
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
>>>>>>> 75ca5994b7804532105cc3c6f3516d59cfbe3314
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
<<<<<<< HEAD
    return 1; // true
=======
    return 1;
>>>>>>> 75ca5994b7804532105cc3c6f3516d59cfbe3314
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
<<<<<<< HEAD
    return 0;
}
=======
   
   cout<<"CHARACTER IS "<<toLowercase('b')<<endl;
   cout<<"CHARACTER IS "<<toLowercase('D')<<endl;
    return 0;
}
>>>>>>> 75ca5994b7804532105cc3c6f3516d59cfbe3314
