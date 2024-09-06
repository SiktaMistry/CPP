#include<iostream>
using namespace std;

int main(){
int n;int rem, result;
cout<<"enter a number\n";
cin>>n;
while(n>0){
rem=n%10;
cout<<rem;
n=n/10;
}

return 0;
}