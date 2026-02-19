#include <iostream>
using namespace std;

void prefixSum(int arr[],int size){
   
     for(int i = 1 ; i<size ;i++){
        arr[i] = arr[i] + arr[i-1];
    }

    for(int i = 0 ; i<size ;i++){
        cout<<arr[i]<<" ";
    }
}

void solve(int arr[],int size){
    int l,r;
    cout<<"\nenter left and right\n";
    cin>>l;
    cin>>r;
    for(int i = l+1 ; i<=r;i++){
        arr[i]= arr[i]+arr[i-1];
    }
    cout<<arr[r];
}

int main(){
    //array scan 
    int size ;
    cout<<"Enter Size of Array \n";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    // prefixSum(arr,size);
    int q;
    cout<<"enter number of query\n";
    cin>>q;
    while(q){
        solve(arr,size);
        q--;
    }
    
}
