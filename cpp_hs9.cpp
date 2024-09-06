#include<iostream>
using namespace std;

int main(){
int n; int sum=0;
cout<<"Enter a number"<<endl;
cin>>n;
for(int i=0;i<=n;i++){
sum+=i;
}
cout<<"The sum of first "<<n<<" natural number is "<<sum;
return 0;
}