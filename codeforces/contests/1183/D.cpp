#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll q;   cin >> q;
    while(q --)
    {
        ll n;   cin >> n;
        map <ll, ll> a;
        for (int i = 0; i < n; i ++){
            ll val; cin >> val;
            a[val] += 1;
        }
        vector <ll> aa;
        for (auto i : a){
            aa.push_back(i.second);
        }
        sort(aa.begin(), aa.end(), greater <ll> ());
        ll lt = LLONG_MAX , res = 0;
        for (ll i = 0; i < aa.size(); i ++)
        {
            if (lt == 0){
                break;
            }
            res += min(lt, aa[i]);
            lt = min(lt, aa[i]) - 1;
        }
        cout << res << "\n";
    }
}