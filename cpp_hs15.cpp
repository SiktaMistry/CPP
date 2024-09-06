#include<iostream>
using namespace std;

int main(){
int num1, num2;
char oper;
cout<<"Enter two numbers\n";
cin>>num1>>num2;
cout<<"Enter the operand\n";
cin>>oper;
switch(oper){
    case '+':
    cout<<num1<<" + "<<num2<<" = "<<num1+num2;
    break;
        case '-':
      cout<<num1<<" - "<<num2<<" = "<<num1-num2;
    break;
        case '*':
      cout<<num1<<" * "<<num2<<" = "<<num1*num2;
    break;
        case '/':
      cout<<num1<<" / "<<num2<<" = "<<num1/num2;
    break;
        case '%':
      cout<<num1<<" % "<<num2<<" = "<<num1%num2;
    break;
}
return 0;
}