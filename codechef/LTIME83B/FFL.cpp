// tyrionlannister238

#include<bits/stdc++.h>
using namespace std;
 
string to_string(string s) {
    return '"' + s + '"';
}

string to_string(char ch) {
    string s(1, ch);
    return '\'' + s + '\'';
}

string to_string(const char *s) {
    return to_string((string)s);
}

string to_string(bool b) {
    return (b ? "true" : "false");
}

template <typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for (const auto &x : v) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
 
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

#define ll long long
#define pb push_back
#define speed ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);

int main() {
	ll t; cin >> t;
	while (t --) {
		ll n, s; cin >> n >> s;
		vector <ll> a(n); for (auto & x : a) cin >> x;
		ll md = LLONG_MAX, mf = LLONG_MAX;
		for (ll i = 0; i < n; i ++){
			ll x; cin >> x;
			if (x)
				mf = min(mf, a[i]); 
			else
				md = min(md, a[i]);
		}
		if (md == LLONG_MAX || mf == LLONG_MAX) {
			cout << "no\n";
			continue;
		}
		if (md + mf + s <= 100) cout << "yes\n";
		else cout << "no\n";
	}
}
