#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;	cin >> n;
	while (n --) {
		ll c, s;	cin >> c >> s;
		ll p1 = s / c, p2 = s % c;
		cout << (p1 + 1) * (p1 + 1) * (s % c) + (p1) * (p1) * (c - s % c) << "\n";
	}
}
