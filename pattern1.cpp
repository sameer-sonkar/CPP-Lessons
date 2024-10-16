#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
 int sum=1;
while(i<=n){
    int j=1;
    
   
    while(j<=i){
       
         char ch='A'+sum-1;

        
        cout<<ch<<" " ;
       
        sum++;
        j++;

    } cout<<endl;
    i++;
}
}
