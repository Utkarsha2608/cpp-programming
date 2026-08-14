#include<iostream>
using namespace std;
class fraction{
int num,den;
public:
void input (){
cout<<"enter numerator:";
cin>>num;
cout<<"enter denominator:";
cin>>den;
}
void display(){
cout<<num<<"/"<<den;
}
fraction add(fraction f){
fraction temp;
temp.num=(num*f.den)+(f.num*den);
temp.den=den*f.den;
return temp;
}
fraction sub(fraction f){
fraction temp;
temp.num=(num*f.den)-(f.num*den);
temp.den= den*f.den;
return temp;
}
};
int main(){
fraction f1,f2,sum,difference;
cout<<"enter first fraction:\n";
f1.input();
cout<<"\nEnter second fraction:\n";
f2.input();
sum=f1.add(f2);
difference=f1.sub(f2);
cout<<"\nAddition =";
sum.display();
cout<<"\nSubtraction=";
difference.display();
return 0;
}



