#include <iostream>
using namespace std;
void reverse(char name[], int n){ // size here because we have already found that in the getLength function
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
    return 0;
}
