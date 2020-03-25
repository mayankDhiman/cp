#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;   string a;
string anss;

ll const N = 2e5 + 10;

ll cache[4][N];
ll nxt[4][N];

ll dp(ll prv, ll ix)
{

    if (cache[prv][ix] != -1){
        return cache[prv][ix];
    }

    char crr = a[ix];
    int cr;
    if (crr == 'R') cr = 0;
    if (crr == 'G') cr = 1;
    if (crr == 'B') cr = 2;

    if (ix == n){
        return 0;
    }

    if (ix == 0){
        ll a1 = (cr != 0) + dp(0, ix + 1);
        ll a2 = (cr != 1) + dp(1, ix + 1);
        ll a3 = (cr != 2) + dp(2, ix + 1);
        if (a1 <= a2 && a1 <= a3) {
            nxt[prv][ix] = 0;
        } 
        else if (a2 <= a1 && a2 <= a3) {
            nxt[prv][ix] = 1;
        } 
        else {
            nxt[prv][ix] = 2;
        }
        return cache[prv][ix] = min(min(a1, a2), a3);
    }
    else{
        if (prv == 0){
            ll a1 = (cr != 1) + dp(1, ix + 1);
            ll a2 = (cr != 2) + dp(2, ix + 1);
        
        if (a1 <= a2) {
            nxt[prv][ix] = 1;
        } 
        else if (a2 <= a1) {
            nxt[prv][ix] = 2;
        }            
        return cache[prv][ix] =  min(a1, a2);
        
        }



        else if (prv == 1){
            ll a1 = (cr != 0) + dp(0, ix + 1);
            ll a2 = (cr != 2) + dp(2, ix + 1);
            if (a1 <= a2) {
                nxt[prv][ix] = 0;
            } 
            else if (a2 <= a1) {
                nxt[prv][ix] = 2;
            }            

            return cache[prv][ix] =  min(a1, a2);
        }
        else if (prv == 2){
            ll a1 = (cr != 0) + dp(0, ix + 1);
            ll a2 = (cr != 1) + dp(1, ix + 1);
            if (a1 <= a2) {
                nxt[prv][ix] = 0;
            } 
            else if (a2 <= a1) {
                nxt[prv][ix] = 1;
            }            

            return cache[prv][ix] =  min(a1, a2);
        }
    }
}

int main()
{
    memset(cache, -1, sizeof(cache));
    cin >> n;   cin >> a;
    string ans;
    cout << dp(0, 0) << "\n";
    int prv = 0, ix = 0;
    while (ix != n) {
        if (nxt[prv][ix] == 0)  cout << "R";
        else if (nxt[prv][ix] == 1) cout << "G";
        else if (nxt[prv][ix] == 2) cout << "B";
        prv = nxt[prv][ix];
        ++ix;
    }
    cout << "\n";
}