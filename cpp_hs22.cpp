#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of lines\n";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=n;j>=1;j--){
        if(j>i)
            cout<<"  ";
        else if(j<=i)
            cout<<"* ";
    }
    cout<<endl;
}
return 0;
}