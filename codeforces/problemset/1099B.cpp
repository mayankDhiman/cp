// 2 --> 1
// 4 --> 4
// 6 --> 9
// 8 --> 16
// 10 --> 25


#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	ll nn = floor(sqrt(n));
	ll a = nn, b = nn + 1;
	if (a * a >= n){
		cout << a + a << "\n";
		return 0;
	}
	if (a * b >= n){
		cout << a + b << "\n";
		return 0;
	}
	if (b * b >= n){
		cout << b + b << "\n";
		return 0;
	}
}
