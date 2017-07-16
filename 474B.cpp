#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int pos[n+1];
	pos[0]=0;
	for(int i=0; i<n ; i++) {
		int x;
		cin>>x;
		pos[i+1]=pos[i]+x;
	}
	int m;
	cin>>m;
	for(int i=0; i<m ; i++) {
		int x;
		cin>>x;
		int ch = lower_bound(pos, pos+n, x) -pos;
		cout<<ch<<endl;
	}
	return 0;
}


