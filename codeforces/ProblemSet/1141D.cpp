#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
vector < vector <ll> > ap(200), bp(200);
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i ++)
    {
        char x; cin >> x;
        if (x == '?')   x = '}';
        ap[x - 'a'].push_back(i + 1);
    }
    for (ll i = 0; i < n; i ++)
    {
        char x; cin >> x;
        if (x == '?')   x = '}';w
        bp[x - 'a'].push_back(i + 1);
    }

    vector <ll> up1, up2, ups1, ups2;
    vector <pair<ll, ll>> rr;
    for (ll i = 0; i < 26; i ++)
    {
        ll j = 0;
        while(j < ap[i].size() && j < bp[i].size()){
            rr.push_back({ap[i][j], bp[i][j]});
            j ++;
        }
        if (ap[i].size() > bp[i].size())
        {
            while(j < ap[i].size()){
                up1.push_back(ap[i][j]);
                j ++;
            }
        }
        else{
            while(j < bp[i].size()){
                up2.push_back(bp[i][j]);
                j ++;
            }
        }        
    }

    ll j = 0;
    while(j < ap[28].size() && j < up2.size()){
        rr.push_back({ap[28][j], up2[j]});
        j ++;
    }
    if (ap[28].size() > up2.size())
    {
        while(j < ap[28].size()){
            ups1.push_back(ap[28][j]);
            j ++;
        }
    }

    j = 0;
    while(j < bp[28].size() && j < up1.size()){
        rr.push_back({up1[j], bp[28][j]});
        j ++;
    }
    if (bp[28].size() > up1.size())
    {
        while(j < ap[28].size()){
            ups2.push_back(bp[28][j]);
            j ++;
        }
    }

    j = 0;
    while(j < ups1.size() && j < ups2.size()){
        rr.push_back({ups1[j], ups2[j]});
        j ++;
    }

    cout << rr.size() << "\n";
    for (ll i = 0; i < rr.size(); i ++)
        cout << rr[i].first << " " << rr[i].second << "\n";

}