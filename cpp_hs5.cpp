#include<iostream>
using namespace std;

int main(){
int x, y, z;
cout<<"Enter the numbers\n";
cin>>x>>y>>z;
int sum=x;
if(sum<y){
sum=y;
if(sum<z)
sum=z;}
else if(sum<z)
sum=z;
cout<<"the maximum number is "<<sum;
return 0;
}