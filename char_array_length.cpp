#include <iostream>
using namespace std;
int getLength(char name[]){ // In character arrays we dont have to specify the array size 
    int count=0;
    for(int i=0;name[i]!='\0';i++){ // Character arrays do not store their length
                                    // length is calculated by counting characters until '\0'
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
   cout<<"Length: "<<getLength(name)<<endl;

   
    return 0;
}
