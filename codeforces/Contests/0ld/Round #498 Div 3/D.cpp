// CodeSlayer612
// 612
// #498 D3 D
// implementation..


using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define f()
int main()
{
    SPEED
    ll n; string s1, s2;
    cin >> n >> s1 >> s2; 
    ll count = 0;
    for (ll i = 0; i < n/2; i ++)
    {	
	    char a[4] = {s1[i],s1[n - i - 1],s2[i], s2[n - i - 1]};
	    if ((a[0] == a[1] and a[2] == a[3]) || (a[0] == a[3] and a[1] == a[2]) || (a[0] == a[2] and a[1] == a[3]))
	    	continue;
	    else if ((a[0] == a[2] and a[1] != a[3]) || (a[0] == a[3] and a[1] != a[2]) || (a[0] != a[2] and a[1] == a[3]) || (a[0] != a[3] and a[1] == a[2]) ||    (a[0] != a[1] and a[2] == a[3]))
	    	count += 1;
	    else 
	    	count += 2;
    }

    if (n % 2 == 1) 
    	count += (s1[n/2] != s2[n / 2]);

    cout << count;
    return 0;
}