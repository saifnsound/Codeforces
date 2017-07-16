#include<iostream>
using namespace std;
int main()
{
	int n,d,sum=0;
	cin>>n>>d;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		sum=sum+x;
	}
	if(sum + n*10 - 10>d)
		cout<<-1;
	else
		cout<<(d-sum)/5;
	return 0;
}
