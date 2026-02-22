#include<iostream>
using namespace std;

void solve(int arr[],int size){
    int i=  0;
    for(int j = 1;j<size-1;j++){
        if(arr[i]!=arr[j]) {
            i++;
            arr[i]= arr[j];
        }
    }
    for(int k = 0 ;k<i;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int size ;
    cout<<"Enter Size of Array \n";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    solve(arr,size);
}