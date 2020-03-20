

using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl;
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define f(i, a, b, c) for(ll i = a; i < b; i += c)
#define pb push_back

int main()
{
	SPEED
	string b; cin >> b;
	std::vector<char> a(b.begin(),b.end());
	ll n = b.size(); 
	b.pb(' ');
	ll flag = 0;
	for (ll i = 0; i < n; i++)
	{
		if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'n')
		{
			continue;
		}
		else
		{
			if (b[i + 1] == 'a' || b[i + 1] == 'e' || b[i + 1] == 'i' || b[i + 1] == 'o' || b[i + 1] == 'u')
			{
				continue;
			}
			else
			{
				flag = 1;
				break;
			}
		}	
	}

	if (flag == 1)
		cout << "NO";
	else
		cout << "YES";

}