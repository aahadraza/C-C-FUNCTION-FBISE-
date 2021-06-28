#include<iostream>
using namespace std;
void prime(int num)
{
	int c,p=1;
	for(c=2;c<=num/2;c++)
	if(num%c==0)
	{
		p=0;
		break;
	}
	if(p==1)
	cout<<num <<"is a prime number:";
	else
	cout<<num <<"isa composite:";
}
int  main()
{
	int n;
	cout<<"enter an integers:";
	cin>>n;
	prime(n);
	return(0);
}