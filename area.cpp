#include<iostream>
using namespace std;
int main()
{
int length,breadth,area,perimeter;
cout<<"enter length:";
cin>>length;
cout<<"enter breadth:";
cin>>breadth;
area=length*breadth;
perimeter = 2*(length+breadth);
cout<<"Area of rectangle="<<area<<endl;
cout<<"perimeter of rectangle="<<perimeter<<endl;
return 0;
}
