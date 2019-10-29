#include <iostream>
#include <cmath>

const double pi = 2*asin(1.0);
int main(){
    
    double a;
    double b;
    double c;
    
    std::cout<<"Ingrese el primer número"<<std::endl;
    std::cin>>a;
    
    std::cout<<"Ingrese el segundo número"<<std::endl;
    std::cin>>b;
    
    std::cout<<"Ingrese el tercer número"<<std::endl;
    std::cin>>c;
    
    boolean puede = (a*a + b*b == c*c);
     
    if(puede){
     std::cout<<"sí"   
    }
    else{
     std::cout<<"no"   
    }
    
    return 0;
}