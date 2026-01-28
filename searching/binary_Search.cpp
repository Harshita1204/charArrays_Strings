#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int tar){
        int start=0;
        int end= n-1;
        int mid=start+end/2;
        for(int i=0;i<=n;i++){
            if(arr[mid]==tar){
                return mid;
            }
            else if(tar<arr[mid]){
                end=mid-1;
            }
            else(arr[mid]>tar){
                start=mid+1;
            }
        }
       return -1; 
}
int main(){
    int arr[]={2,4,6,8,12,14,16,17};
    
    int index=binarySearch(arr,8,16);
    cout<<"Element found at :"<<index;
}