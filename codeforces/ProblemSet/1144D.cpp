#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    vector <ll> a(n), cnt(2e5, 0);   
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];    
        cnt[a[i]] += 1;
    }
    ll mx = max_element(cnt.begin(), cnt.end()) - cnt.begin();
    ll pos = find(a.begin(), a.end(), mx) - a.begin();
    vector <ll> a11 = a;
    vector < vector <ll> > ans;

    for (ll i = pos - 1; i >= 0; i --)
    {
        if (a[i] == a[i + 1])   continue;
        else if (a[i] < a[i + 1]){
            a[i] = a[i + 1];
            ans.push_back({1, i + 1, i + 2});
        }
        else if (a[i] > a[i + 1]){
            a[i] = a[i + 1];
            ans.push_back({2, i + 1, i + 2});
        }
    }

    for (ll i = pos; i < n - 1; i ++)
    {
        if (a[i] == a[i + 1])   continue;
        else if (a[i] < a[i + 1]){
            a[i + 1] = a[i];
            ans.push_back({2, i + 2, i + 1});
        }
        else if (a[i] > a[i + 1]){
            a[i + 1] = a[i];
            ans.push_back({1, i + 2, i + 1});
        }
    }
    
    cout << ans.size() << "\n";
    for (ll i = 0; i < ans.size(); i ++){
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << "\n";
    }

}