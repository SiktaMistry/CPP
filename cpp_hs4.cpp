#include<iostream>
using namespace std;

int main(){
int x, y;
cout<<"Enter a number";
cin>>x>>y;
if(x>y)
cout<<"maximum number is "<<x<<endl<<"minimum number is"<<y<<endl;
else if(x<y)
cout<<"maximum number is "<<y<<endl<<"minimum number is"<<x<<endl;
else
cout<<"both the numbers are equal so "<<"maximum number is "<<y<<endl<<"minimum number is"<<x<<endl;
return 0;
}