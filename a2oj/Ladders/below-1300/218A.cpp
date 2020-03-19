using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n, m; cin >> n >> m;
	int a[n]; for (int i = 0; i < n; i ++)	cin >> a[i];
	if (accumulate(a, a + n) == n){
		cout << n << " " << n << endl;
		return 0;
	}
}