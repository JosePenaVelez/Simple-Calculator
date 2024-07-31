#include <iostream>

double calculate (double a, double b, char op){
    switch (op)
    {
    case '*': return a*b;
    case '/': {
        if(b==0){
            std::cout<<"Error: Not divisible";
            return 0;
        }
        else
            return a/b;
        }
    case '+': return a+b;
    case '-': return a-b;
    
    default:
        std::cout<<"Error: Enter the correct operator";
        return 0;
    }
}

int main (){
    double a,b,res;
    char op;
    std::cout<<"Enter 1st Number:";
    std::cin>>a;
    std::cout<<"Enter Operator (*/+-):";
    std::cin>>op;
    std::cout<<"Enter 2nd Number:";
    std::cin>>b;

    res = calculate(a,b,op);
    std::cout<<"\nResult: " << res;
    return 0;
}
