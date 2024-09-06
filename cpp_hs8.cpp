#include<iostream>
using namespace std;

int main(){
char letter;
cout<<"Enter a letter"<<endl;
cin>>letter;
if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U')
cout<<"The letter "<<letter<<" is a vowel"<<endl;
else
cout<<"The letter "<<letter<<" is a consonant";
return 0;
}