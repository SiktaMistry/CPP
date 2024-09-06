#include<iostream>
using namespace std;

int main(){
int n, rem, num, result;
int sum=0;
cout<<"enter a number\n";
cin>>n;
num=n;
while(num>0){
    rem=num%10;
    result=rem*rem*rem;
    sum+=result;
    num=num/10;
}
if(sum==n)
cout<<"The number is a armstrong number";
else
cout<<"The number is not an armstrong number";
return 0;
}