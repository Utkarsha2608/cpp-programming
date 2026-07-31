#include<iostream>
using namespace std;
int main(){
int n,temp,rem,reverse=0;
cout<<"enter a number:";
cin>>n;
temp=n;
while(n!=0){
rem+n%10;
reverse=reverse*10+rem;
n=n/10;
}
if (temp ==reverse)
cout<<"palindrome number";
else
cout<<"not a palindrome number";
return 0;
}
