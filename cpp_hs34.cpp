#include<iostream>
using namespace std;

int sum(int a,int b){
    int result=a+b;
    return result;
} 
int main(){
int a,b;
cout<<"enter two numbers\n";
cin>>a>>b;
cout<<sum(a,b);
return 0;
}