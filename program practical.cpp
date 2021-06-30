#include<iostream>
using namespace std;
void string(char st[])
{
	int i,j;
	char ch;
	i=strlen(st)-1;
	i=0;
	while(i<j)
	{
		ch=st[j];
		st[j]=st[i];
		st[i]=ch;
		i++;
		i--;
	}
}
int main()
{
	char line[100];
	char reverse[100]="",temp[50];
	int i,j,n;
	
	cout<<"enter any string/number:\n";
	cin.get(line,100);
	n=strlen(line);
	for(i=0;i<n;i++)
	{
		for(j=0;i<n&&line[i]!='',++i,++j)
		temp[j]=line[i];
		temp[j]='\0';
		string(temp);
		strcat(reverse,temp);
		strcat(reverse,"";)
	}
	cout<<"\n reversed:\n\n"<<reverse;
	return(0);
}