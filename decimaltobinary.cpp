#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,answer=0,i=1;
    cin>>n;
    while(n!=0){
    
    int bit=n&1;
   
    answer=(bit*i+answer);
     n=n>>1;
    i=i*10;
    }
    cout<<"answer is :"<<answer;










}
