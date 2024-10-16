#include<iostream>
using namespace std;
int main (){
    //pointers =variable that stores a memory address of another variable ;
    // & address of operator
    // *dereference operator
    string name="sameer sonkar";
    int age=19;
    int *page=&age;
    string *pName=&name;
    cout<<*pName<<endl;
    cout<<pName<<endl;
    cout<<*page<<" "<<page;
    
    return 0;
}