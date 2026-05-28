#include<iostream>
using namespace std;
int sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
}
int printt(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={4,6,3,9,0};
    sort(arr,5);
    printt(arr,5);
}