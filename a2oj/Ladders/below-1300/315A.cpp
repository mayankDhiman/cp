using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++)		cin >> a[i] >> b[i];
	int res = 0;
	for (int i = 0; i < n; i++){
		bool ok = 0;
		for (int j = 0; j < n; j ++){
			if (b[j] == a[i] && j != i){
				ok = 1;
				break;
			}
		}
		if (!ok)	res += 1;
	}
	cout << res << "\n";
}