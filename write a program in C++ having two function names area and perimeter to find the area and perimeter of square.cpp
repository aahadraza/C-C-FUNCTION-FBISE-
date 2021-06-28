#include<iostream>
using namespace std;
void area(float s)
{
	float a;
	a=s*s;
	cout<<"area:"<<a<<endl;
}
void perimeter(float s)
{
	float p;
	p=s*4;
	cout<<"perimeter="<<p<<endl;
}
int main()
{
	float side;
	cout<<"enter the length of side"<<endl;
	cin>>side;
	area(side);
	perimeter(side);
	return(0);
}