#include<iostream>
void linearsearch( int arr[],int size,int n)
{
for(int i=0;i<size;i++){
    if(arr[i]==n){
        cout<<"milgaya"<<endl;
        break;
    }
}
}
using namespace std;
int main(){
    int size,arr[10000],n;
    cin>>size>>n;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    linearsearch(arr,size,n);



}
