#include <iostream>
#include <string>
int main(){
    int n1;
    std:: cout<<"enter age of person : ";
    std::cin>>n1;
    try{
        if(n1<18){
            throw n1;
        }
    
        else{
            std::cout <<"Age : "<<n1 << "\n APPROVED "<< "\n" ;
        }
    }
    catch(int a){
        std::cout << "\nERROR : UNDERAGE !! ( " << a <<")"<< "\n";
    }
}
//OUTPUT
//enter age of person : 56
//Age : 56
// APPROVED
