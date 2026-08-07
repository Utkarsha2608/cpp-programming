#include <iostream>
using namespace std;
class circle
{
private:
float radius;
public:
void accept()
{
cout<<"enter radius:";
cin>> radius;
}
void calculate()
{
float area,circumference;
area=3.14*radius*radius;
circumference=2*3.14*radius;
cout<<"area="<<area<<endl;
cout<<"circumference="<<circumference<<endl;
}
};
int main()
{
circle c;
c.accept();
c.calculate();
return 0;
}
