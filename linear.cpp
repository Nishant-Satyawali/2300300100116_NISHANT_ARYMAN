#include <iostream>
using namespace std;

int LinearSearch(int arr[],int ele,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==ele) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size  = 7;
    int ele = 5;
    cout<<LinearSearch(arr,ele,size);
return 0;
}