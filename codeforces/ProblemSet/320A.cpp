#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	string a;	cin >> a;
	ll n = a.size();

	if (n < 3){
		if (n == 2){
			if (a == "14" or a == "11"){
				cout << "YES\n";
				return 0;
			}
		}
		if (n == 1){
			if (a == "1"){
				cout << "YES\n";
				return 0;
			}
		}

		cout << "NO\n";
		return 0;
	}

	ll i = 0;
	for (i = 0; i < n - 2; )
	{
		if (a.substr(i, 3) == "144"){
			i += 3;
		}
		else if (a.substr(i, 2) == "14"){
			i += 2;
		}
		else if (a[i] == '1'){
			i += 1;
		}
		else{
			cout << "NO\n";
			return 0;
		}
	}

	if (i == n){
		cout << "YES\n";
	}
	else if (i == n - 1 && a[i] == '1'){
		cout << "YES\n";
	}
	else if (i == n - 2 && (a.substr(i, i + 1) == "14" or a.substr(i, i + 1) == "11")){
		cout << "YES\n";
	}
	else{
	cout << "NO\n";		
	}
	return 0;

}