#include<iostream>
using namespace std;

int main(){
int a, b, i, j;
cout<<"Enter the value of a and b\n";
cin>>a>>b;
for(i=a;i<=b;i++){
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }
    }
    if(j==i)
    cout<<i;
}
return 0;
}