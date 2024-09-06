#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
int temp=0;
if(n==0||n==1)
    temp=1;
for(int i=2;i<=n/2;i++){
    if(n%i==0)
    temp=1;
    }
if(temp==0)
cout<<"The number is prime\n";
else
cout<<"The number is not prime\n";
return 0;
}