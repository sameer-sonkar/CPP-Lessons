// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
       
    }
     cout<<count;
    // Write C++ code here
   
    return 0;
}