#include<iostream>
using namespace std;

int main(){
int i,j,n;
cin>>n;
for(i=1;i<=n;i++){
    int k=i;
    for(j=1;j<=(n-i);j++){
        cout<<"  ";
    }
    for(j=n-i;j<=n;j++){
    cout<<k<<" ";
    k--;
    }
    for(j=n;j<2n;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}
return 0;
}