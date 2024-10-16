#include<iostream>
int main(){
    std::cout<<"enter your name :";
    std::string name;
    std ::getline(std::cin,name);
    std::cout<<name.length();
    return 0;

}