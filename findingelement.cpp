#include<iostream>
using namespace std;
int main(){
    int arr[5100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){int isunique=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                isunique=0;
                break;
            }
        }
        if(isunique){
            cout<<arr[i];
        }
    }
