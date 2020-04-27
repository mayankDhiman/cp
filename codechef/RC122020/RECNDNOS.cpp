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
		ll n; cin >> n;
		map <ll, vector <ll> > pos;
		for (ll i = 0; i < n; i ++){
			ll x; cin >> x;
			pos[x].push_back(i);
		}
		/* for (auto x : pos){ */
		/* 	cout << x.first << " "; for (auto y : x.second) cout << y << " "; cout << "\n"; */
		/* } */
		ll res = 0, ans = -1;
		for (auto x : pos){
			ll cn = 0, pr = -2;
			/* cout << "\n\n\n"; */
			for (ll i = 0; i < int(x.second.size()); i ++){
				if (x.second[i] == pr + 1){

				}
				else {
					/* cout << i << "\n"; */
					cn += 1;
					pr = x.second[i];
				}
			}
			if (cn > res){
				res = max(res, cn);
				ans = x.first;
			}
		}
		cout << ans << "\n";
	}
}
