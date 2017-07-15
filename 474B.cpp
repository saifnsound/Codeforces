#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][2];
	int x[n];
	for(int i=0;i<n;i++) {
		cin>>x[i];	
	}
	a[0][0]=1;
	a[0][1]=x[0];
	int i=1;
	while(i<n) {
		a[i][0]=a[i-1][1]+1;
		a[i][1]=x[i]+a[i-1][1];		
		i++;
	}
	int m;
	cin>>m;
	int y[m];
	for(int i=0;i<m;i++) {
		cin>>y[i];
	}
	for (i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(y[i] >= a[j][0] && y[i]<= a[j][1])
			{
				cout<< j+1<<endl;
				break;
			}
		}
	}
	return 0;
}


