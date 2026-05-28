#include<bits/stdc++.h>
using namespace std;
int bubblesort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swapped=1;
                swap(arr[j],arr[j+1]);

            }
        }
        if(swapped==0)
        break;
    }
    
    
}
int printing(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}
int main(){
    int arr[5]={2,8,4,6,9};
    bubblesort(arr,5);
    printing(arr,5);
}