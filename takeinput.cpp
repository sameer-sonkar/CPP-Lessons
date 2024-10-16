#include<iostream>
int main(){
    std::string name;
    int age;
    std::cout<<"what is your full name";

    std::getline(std::cin,name);
    std::cout<<"what is your age";
    std::cin>>age;
    
    std::cout<<"hello"<<name<<'\n';
    std::cout<<"you are "<<age<<"years old";
    /*ye jo upar getline hai woh string me spaces ko bhi include karne ke liye liya jata hai par 
    kabhi bhi getline se pehle input  liya jata hai toh woh use read nhi karta iske liye solution hai ki
    std::getline(std::cin>>std::ws,name);
    */










    return 0;
}
