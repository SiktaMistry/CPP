#include<iostream>
using namespace std;

int main(){
char ch;
cout<<"Enter an alphabet\n";
cin>>ch;
switch(ch)
{
    case 'a':
    cout<<"The alphabet is vowel";
    break;
    case 'e':
    cout<<"The alphabet is vowel";
    break;
    case 'i':
    cout<<"The alphabet is vowel";
    break;
    case 'o':
    cout<<"The alphabet is vowel";
    break;
    case 'u':
    cout<<"The alphabet is vowel";
    break;
    default:
    cout<<"The alphabet is a consonant";
    break;
}
return 0;
}