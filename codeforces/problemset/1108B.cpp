using namespace std;
#include <bits/stdc++.h>
int cnt[10001];

int main()
{
	int n;	cin >> n;
	int a[n];
	for (int i = 0; i < 10001; i++)	cnt[i] = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]] += 1;
	}

	int r1 = *max_element(a, a + n), r2 = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (cnt[a[i]] == 2 || (r1%a[i]))
			r2 = max(a[i], r2);
	}

	cout << r1 << " " << r2 << endl;

}