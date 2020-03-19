#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i ++)	cin >> a[i];

	int hi = n - 1, lo = 0;
	while(a[hi] == a[0])	hi --;
	while(a[lo] == a[n - 1])	lo ++;	lo = n - 1 - lo;

	cout << max(hi, lo) << "\n";
	return 0;
}