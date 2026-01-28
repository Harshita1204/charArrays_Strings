#include <iostream>
using namespace std;
int main() {
   char name[20];
   cout<<"Enter your name: "<<endl; // harshita
   cin>>name;
   cout<<"your name is ";
   cout<<name<<endl; // your name is harshita

    cout<<"Enter your name: "<<endl; // harshita
   cin>>name;
   name[2]='\0';
   cout<<"your name is ";
   cout<<name; // at the 2nd index of the name null character is placed so only 2 characters will be printed.
    // only 'ha' will be printed in this case
    return 0;
}
