#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		string a;	cin >> a;	ll n = a.size();
		if (n >= 2){
			if (a.substr(n - 2, 2) == "po"){
				cout << "FILIPINO\n";
				continue;
			}	
		}
		if (n >= 4){
			if (a.substr(n - 4, 4) == "desu" || a.substr(n - 4, 4) == "masu"){
				cout << "JAPANESE\n";
				continue;
			}	
		}
		if (n >= 5){
			if (a.substr(n - 5, 5) == "mnida"){
				cout << "KOREAN\n";
				continue;				
			}	
		}
	}
}