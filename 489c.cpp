#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int m,s,case1=0;
	cin>>m>>s;
	for(int i=pow(10,m-1);i<pow(10,m);i++)
	{
		int arr[m+1];
		int x=i;
		int l=0;
		int s2=0;
		while(x!=0)
		{
			arr[l]=x%10;
			x=x/10;
			s2=s2+arr[l];
			l++;
		}
		if(s2 == s)
		{
			cout<<i<<" ";
			case1++;
			break;
		}
	}
	for(int i=pow(10,m)-1;i>=pow(10,m-1);i--)
	{
		int arr[m+1];
		int x=i;
		int l=0;
		int s2=0;
		while(x!=0)
		{
			arr[l]=x%10;
			x=x/10;
			s2=s2+arr[l];
			l++;
		}
		if(s2 == s)
		{
			cout<<i<<" ";
			case1++;
			break;
		}
	}
	if(case1==0)
		cout<<-1<<" "<<-1;
	else if(case1==1)
		cout<<-1;
	return 0;
}
