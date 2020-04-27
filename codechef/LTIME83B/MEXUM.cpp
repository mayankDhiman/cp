

#define ll long long 

ll power(ll x, ll y, ll p)  
{  
    ll res = 1;  
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0){  
        if (y & 1)  
            res = (res*x) % p;  
        y = y>>1;  
        x = (x*x) % p;  
    }  
    return res;  
}  

int test()
{
	cin >> a;
}
int main() {
	ll t; cin >> t;
	while (t --) {
		ll n, mod = 998244353; cin >> n;
		vector <ll> a(n); for (ll i = 0; i < n; i ++) cin >> a[i];
		map <ll, ll> cn;  for (auto& x : a) cn[x] += 1;
		sort (a.begin(), a.end());
		ll res = 0, cr = 1, lm = *max_element(a.begin(), a.end()) + 1;
		for (ll i = 1; i <= lm; i ++){
			ll bg = upper_bound(a.begin(), a.end(), i) - a.begin(); bg = n - bg; // all numbers bigger may occur or not
			ll r = (cr%mod * power(2, bg, mod))%mod;
			res += i%mod * r%mod; res %= mod;
			if (cn.find(i) == cn.end()) break;
			cr *= power(2, cn[i], mod) - 1; cr %= mod; // all before i must occur atleast one time
		} 	
		cout << res << "\n";
	}
}
