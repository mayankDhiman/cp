#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i ++)	cin >> a[i];

	if (a[0]%2 == 1 && a[n - 1]%2 == 1 && n%2 == 1){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
}