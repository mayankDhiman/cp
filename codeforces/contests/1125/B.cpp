#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while (t --)
    {
        ll n, x;    cin >> n >> x;
        string a;   cin >> a;

        ll tot_diff = count(a.begin(), a.end(), '0') - count(a.begin(), a.end(), '1');

        ll z = 0, o = 0, result = 0;
        if ((z - o) == x) result += 1;

        bool inf = 0;
        for (ll i = 0; i < a.size(); i ++) {
            if (a[i] == '0')    z += 1;
            else    o += 1;
            ll t1 = x - (z - o);

            if (tot_diff == 0 && (z - o) == x){
                inf = 1;
                break; 
            }

            if (tot_diff != 0){
                if ( (t1 % tot_diff == 0) && (t1 / tot_diff >= 0) ){
                    result += 1;
                }
            }

        }

        if (inf){
            cout << "-1\n";
        }
        else
            cout << result << "\n";
    }
}

// 6 270024627
// 111000
