#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		string a;	cin >> a;	ll n = a.size();
		vector <char> ref{'a', 'b', 'c'};
		for (ll i = 0; i < n; i ++)
		{	
			if (a[i] == '?')
			{
				if (i == 0){
					for (auto r : ref){
						if (r != a[i + 1]){
							a[i] = r;
						}				
					}
				}	
				else if (i == n - 1){
					for (auto r : ref){
						if (r !=a[i - 1]){
							a[i] = r;
						}				
					}			
				}
				else{
					for (auto r : ref){
						if (r !=a[i - 1] && r != a[i + 1]){
							a[i] = r;
						}
					}			
				}
			}
		}	
		bool ok = 1;
		for (ll i = 1; i < n; i ++){
			if (a[i] == a[i - 1]){
				ok = 0;
				break;
			}
		}
		if (!ok){
			cout << "-1\n";
		}
		else{
			cout << a << '\n';
		}

	}
}
