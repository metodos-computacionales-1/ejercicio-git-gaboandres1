#include <iostream>
#include <cmath>

const double pi = 2*asin(1.0);
int main(){
    
    double r;
    std::cout<<"Ingrese el radio del circulo"<<std::endl;
    std:cin>>r;
    
    std::cout<<"El radio del círculo es: "<<2*r<<std::endl;
    std::cout<<"El perímetro del círculo es: "<<2*pi*r<<std::endl;
    std::cout<<"El área del círculo es: "<<pi*r*r<<std::endl;
    
    return 0;
}