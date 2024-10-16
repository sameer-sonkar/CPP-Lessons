#include<iostream>
#include<vector>

//typedef std::string text_t;
//typedef int number_t;
using text_t=std::string;
using number_t=int;
int main(){
    /*typdef is like a nickname of a data type ;
    using is just the alternative of typedef;*/
   
    text_t name="sameer sonkar";
    std::cout<<name<<'\n';
    number_t age=19;
    std::cout<<age<<'\n';





    return 0;
}