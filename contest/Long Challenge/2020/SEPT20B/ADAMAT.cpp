#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void solve()	{
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];
	int place[n-1];
	for(int j=1;j<n;j++)	{
		if(j+1 != a[0][j])
			place[j-1] = 0;
		else
			place[j-1] = 1;
	}
	int count = 0;
	for(int i=n-2;i>=0;i--)	{
		if(place[i] == 0)	{
			count++;
			for(int j = i-1;j>=0;j--)	{
				if(place[j] == 0)
					place[j] = 1;
				else
					place[j] = 0;
			}
		}
	}
	cout << count;
}

int main()	{
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)	{
		solve();
		cout << "\n";
	}	
	return 0;
}
