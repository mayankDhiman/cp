// N/2, and N/2 + 1


#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

int main()
{
	int n;	cin >> n;

	int mx = 1, mn = N;

	for (int i = 0; i < n; i ++)
	{
		int t;	cin >> t;
		if (t > mx && t <= N/2){
			mx = t;
		}
		if (t < mn && t > N/2){
			mn = t;
		}
	}

	// cout << mx << " " << mn << "\n";
	cout << max(mx - 1,N - mn) << "\n";
}