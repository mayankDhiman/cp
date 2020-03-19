// 5 3 4 1 2



#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, q, mxQ = LLONG_MIN;    cin >> n >> q;
    deque <ll> a;
    for (ll i = 0; i < n; i ++){
        ll t;   cin >> t;
        mxQ = max(mxQ, t);
        a.push_back(t);
    }
    map < ll, pair <ll, ll> > ans;
    ll lt = LLONG_MAX;
    ll i = 0;
    while(1)
    {
        ll A = a.front();   a.pop_front();
        ll B = a.front();   a.pop_front();
        ans[i + 1] = {A, B};
        if (A > B){
            a.push_front(A);
            a.push_back(B);
        }
        else{
            a.push_back(A);
            a.push_front(B);
        }
        if (A == mxQ){
            lt = i + 1;
            break;
        }
        i += 1;
    }
    vector <ll> ans2;
    bool ok = 0;
    while(!a.empty()){
        ll t = a.front();
        a.pop_front();
        if (ok){
            ans2.push_back(t);
        }
        ok = 1;
    }

    while(q --)
    {
        ll qq;   cin >> qq;
        if (qq <= lt){
            cout << ans[qq].first << " " << ans[qq].second << "\n";
        }
        else{
            qq = qq - lt;
            cout << mxQ << " " << ans2[(qq - 1)%(ans2.size()*1ll)] << "\n";
        }
    }

}