#include<iostream>
using namespace std;

int FloorNumber(int arr[],int size,int target){
    int ans=-1;
    int a = 0 ;
    int b= size-1;
    if(target>arr[b]) return -1;
    if(size==1) return arr[0];
    while(a<=b){
        int m = a+(b-a)/2;
        if(arr[m]<=target) {
            ans = arr[m];
             a = m+1 ;
            }
        else b= m-1;
        }
        return ans;
}

int main(){
    //array scan 
    int size;
    cout<<"Enter Size of Array \n";
    cin>>size;
    int arr[size];
    cout<<"Enter array of size:"<<size<<" \n";
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element \n";
    cin>>target;
    cout<<FloorNumber(arr,size,target);   
}
