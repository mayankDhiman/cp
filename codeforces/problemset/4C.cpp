#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;	cin >> n;
	map <string, int> cnt;

	for (int i = 0; i < n; i ++)
	{
		string c;	cin >> c;
		if (cnt[c] == 0){
			cout << "OK\n";
		}
		else{
			cout << c;
			cout << cnt[c] << "\n";
		}
		cnt[c] += 1;
	}

	return 0;
}