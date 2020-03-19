using namespace std;
#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int res = 0;
	ios_base::sync_with_stdio(0);	cin.tie(0);		cout.tie(0);
	for(double i = 2; i <= n; i++)
	{
		for (double j = 1; j < i; j++)
		{
			// cout << i << " " << j << " " << sqrt(i*i - j*j) << endl;
			if (!(sqrt(i*i - j*j) - floor(sqrt(i*i - j*j))))
				res += 1;
		}
	}
	cout << res/2 << endl;
	// int i = 4, j = 3;
	// cout << (sqrt(i*i - j*j) - floor(sqrt(i*i - j*j))) << endl;
	return 0;
}