#include<iostream>
using namespace std;
void sort(int array[],int size);
int main(){
    int array[]={10,2,4,5,7,8,3,11,12,15};
    
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);

    return 0;
   

}
 void sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
 }