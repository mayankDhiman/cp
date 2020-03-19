using namespace std;
#include <bits/stdc++.h>
int main()
{
	string a, b; cin >> a >> b;
	if (a.size() != b.size()){
		cout << "NO" << endl;
		return 0;
	}
	vector<int> r;
	for (int i = 0; i < a.size(); i++)
	{	
		if (a[i] != b[i])
			r.push_back(i);
	}

	if (r.size() != 2){
		cout << "NO" << endl;
		return 0;
	}
	if (a[r[0]] == b[r[1]] && a[r[1]] == b[r[0]])	cout << "YES" << endl;
	else	cout << "NO" << endl;
}