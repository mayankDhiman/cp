using namespace std;
#include <bits/stdc++.h>
int slve(int a[], int n, int m, int d)
{
	int ans = 0;
	for (int i = 0; i < n; i ++)
		ans += abs(a[i] - m);
	return (ans/d);
}

int main()
{
	int x, m, d, n;	cin >> x >> m >> d;	n = x*m;	
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
	sort(a, a + n);
	bool ok = 1;	int t = a[0] % d;
	for (auto i : a)
		if (i % d != t){
			ok = 0;
			break;
		}
	if (!ok){
		cout << "-1\n";
		return 0;
	}	

	int m1 = a[n/2], m2 = a[n/2 - 1];
	cout << min(slve(a, n, m1, d), slve(a, n, m2, d)) << endl;
	return 0;
}