#include<iostream>
#include<math.h>
using namespace std;
 
long dem(long n)
{
	long x,y,d,m;
	n=n*2;
	m=sqrt(n);
 
	d=0;
	for(long x=2;x<=m;x++)
	if(n%x==0)
	{
		y=n/x;
		if ((y-x)%2!=0)d++;
	}
	return d;
}
 
long kq[1002];
int pos[1002];
int main()
{
	long n;
	int test;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		cin>>pos[i];
		cin>>n;
		kq[i]=dem(n);
	}
	for(int i=1;i<=test;i++)
	cout<<pos[i]<<" "<<kq[i]<<"\n";
	//getch();
}
 
