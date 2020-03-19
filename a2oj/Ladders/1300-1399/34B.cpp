using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, m, res = 0;	cin >> n >> m;
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
	sort (a, a + n);

	int i = 0, curr = 0;
	while(a[i] < 0 && i < n && curr < m){
		res += abs(a[i]);
		curr += 1;
		i += 1;
	}

	cout << res << endl;
}