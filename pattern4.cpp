#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    
        pattern1(n);
}