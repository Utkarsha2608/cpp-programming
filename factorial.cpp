#include <iostream>
using namespace std;
int main(){
int n,i;
long long fact = 1;
cout<<"enter a number:";
cin>>n;
for (i=1;i<=n;i++){
fact =fact*i;
}
cout<<"factorial="<<fact;
return 0;
}
