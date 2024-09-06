#include<iostream>
using namespace std;

int main(){
int n;
int fact=1;
cout<<"Enter a number\n";
cin>>n;
if(n==0||n==1){
    n=1;
}
else{
    for(int i=1;i<=n;i++){
        fact*=i;
    }
}
cout<<fact;
return 0;
}