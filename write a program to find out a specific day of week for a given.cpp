#include<iostream>
using namespace std;

int dayofweek(int d,int m,int y)
{
	static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m<3;
	return(y+y/4-y/100+y/400+t[m-1]+d)%7;
}
int main()
{
	int day,dd,mm,yyy;
	const char*name[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	cout<<"enter day,month and year:";
	cin>>dd>>mm>>yyy;
	day=dayofweek(dd,mm,yyy);
	cout<<"day:"<<name[day]<<endl;
	return(0);
}