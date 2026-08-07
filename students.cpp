#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int rollNo;
float marks;
public:
void accept()
{
cout<<"enter student name:";
cin>>name;
cout<<"enter roll number:";
cin>>rollNo;
cout<<"enter marks:";
cin>>marks;
}
void display() 
{
cout<<"\n----Student Details----\n";
cout<<"Name:"<<name<<endl;
cout<<"Roll No.:"<<rollNo<<endl;
cout<<"Marks:"<<marks<<endl;
}
};
int main()
{
Student s; 
s.accept();
s.display();
return 0;
}
