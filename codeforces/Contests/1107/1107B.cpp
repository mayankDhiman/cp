// 1 2 3 4 5 6 7 8 9 1  2  3  4  5  6  7  8  9  1
// 1                 10 11                      19
// 1 10 19 28 37
// 1 5 = 0 + 5
// 3 1
// 9923 = 23 = 5
// 9924 = 6
// 1 10 19 28 37 46 55 64 73 82 91 100 109 118


// 9925 = 7
// 9926 = 8
// 9927 = 9
// 9928 = 1


using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
	ll n; cin >> n;
	while(n --)
	{
		ll k, x; cin >> k >> x;
		k -= 1;
		ll res = 1;
		while(k --){
			res += 9;
			// cout << res << endl;
		}
		res += (x - 1);
		cout << res << "\n";
	}
}