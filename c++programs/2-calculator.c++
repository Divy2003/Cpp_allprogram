#include<iostream>
using namespace std;
int main(){
    char op;
    double num1,num2;

    cout<<"enter the 1st number";
    cin>>num1;

    cout<<"enter the operator (+,-,*,/):";
    cin>>op;

    cout<<"enter the 2nd number";
    cin>>num2;

        switch(op){
        case '+' : cout<<num1<<"+"<<num2<<"="<<(num1 + num2);
        break;
    
        case '-': cout<<num1<<op<<num2<<"="<<num1 - num2;
        break;

        case '*': cout<<num1<<op<<num2<<"="<<num1 * num2;
        break;

        case '/':  if(num2!=0)cout<<num1<<op<<num2<<"="<<num1/num2;
         
                     
                   else
                       "undefind this number";
                                        
        break ;

           default: cout<<op<<"is an invalid operator";
        }
    return 0;
}