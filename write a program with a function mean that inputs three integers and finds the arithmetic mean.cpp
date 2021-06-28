#include<iostream>
using namespace std;
void mean(float a,float b,float c)
{
	float m;
	m=(a+b+c)/3;
	cout<<"arithmetic mean"<<m;
}
int main()
{
	float x,y,z;
	cout<<"enter three number:";
	cin>>x>>y>>z;
	mean(x,y,z);
	return(0);
}