#include<iostream>
using namespace std;
void myfunction(int n); // create a function
int main()
{
	int num;
	cout<<"enter the value of any random of number:";
	cin>>num;
	myfunction(num); // function call
}
    void myfunction(int n) //function definition:
{
	int c;
	for(c=1;c<=10;c++)
	{
		cout<<n<<"*"<<"="<<n*c<<endl;
	}
	//return(0);
}