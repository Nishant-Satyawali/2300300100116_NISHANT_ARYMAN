#include<iostream>
using namespace std;

int solve(int arr[],int size,int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            e = mid-1;
        }
        else if(target<arr[mid]){
           e = mid-1;
    }else{
        s= mid+1;
    }
    mid = s + (e-s)/2;
}
return ans;
}

int solve2(int arr[],int size,int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int last = -1;
    while(s<=e){
        if(arr[mid]==target){
            last = mid;
            s = mid+1;
        }
        else if(target<arr[mid]){
           e = mid-1;
    }else{
        s= mid+1;
    }
    mid = s + (e-s)/2;
}
return last;
}

int main(){
     int size ;
    cout<<"Enter Size of Array \n";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    int x ;
    cout<<"Enter your Target";
    cin>>x;
    cout<<solve2(arr,size,x);
}