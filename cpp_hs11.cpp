#include<iostream>
using namespace std;

int main(){
int number; int sum=0;
cout<<"Enter a number"<<endl;
cin>>number;
while(number>=0){
sum+=number;
cout<<"Enter a number"<<endl;
cin>>number;
}
cout<<"the sum of the number is "<<sum;
return 0;
}