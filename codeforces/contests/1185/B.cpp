#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string a, string b)
{
    ll n = a.size(), m = b.size();  a += " ";   b += " ";
    ll cnt = 0; vector < pair <char, ll> > pp1, pp2;
    for (ll i = 0; i < n; i ++)
    {
        cnt += 1;
        if (a[i + 1] != a[i]){
            pp1.push_back({a[i], cnt});
            cnt = 0;
        }
    }
    cnt = 0;
    for (ll i = 0; i < m; i ++)
    {
        cnt += 1;
        if (b[i + 1] != b[i]){
            pp2.push_back({b[i], cnt});
            cnt = 0;
        }
    }
    if (pp1.size() != pp2.size())   return false;
    for (int i = 0; i < pp1.size(); i ++){
        if ((pp1[i].first != pp2[i].first) || (pp1[i].second > pp2[i].second))
            return false;
    } 
    return true;
}

int main()
{
    ll n;   cin >> n;
    while(n --)
    {
        string aa, bb;  cin >> aa >> bb;
        if (check(aa, bb))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}