#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector < vector <int> > _a;
map < tuple <set <ll>, set<ll>, set<ll> >  , ll> dp;

ll solve(set <ll> pays, set <ll> slots, set <ll> movies){
    if (slots.size() == 0 || movies.size() == 0){
        return 0;
    }
    if (dp.count({pays, slots, movies}) != 0){
        return dp[{pays, slots, movies}];
    }
    ll res = LLONG_MIN;
    for (auto p: pays){
        for (auto m : movies){
            for (auto s : slots){
                set <ll> pays1(pays.begin(), pays.end()), movies1(movies.begin(), movies.end()), slots1(slots.begin(), slots.end());
                pays1.erase(p);
                movies1.erase(m);
                slots1.erase(s);
                if (_a[m][s] == 0){
                    res = max(res, -100 + solve(pays, slots1, movies1));
                }
                else{
                    res = max( (p * _a[m][s]) + solve(pays1, slots1, movies1), res);
                }
            }
        }
    }
    return dp[{pays, slots, movies}] = res;
}

int main(){
    ll t;   cin >> t;   ll tot = 0;
    while(t--)
    {
        dp.clear();
        ll n;   cin >> n;
        vector < vector <int> > a(4, vector <int> (4));
        for (int i = 0; i < n; i ++){
            char x; int y;  cin >> x >> y;
            a[x - 'A'][y/3 - 1] += 1;
        }
        _a = a;
        set <ll> pays{100, 75, 50, 25};
        set <ll> slots{0, 1, 2, 3};
        set <ll> movies{0, 1, 2, 3};
        tot += solve(pays, slots, movies);
        cout << solve(pays, slots, movies) << "\n";
    }
    cout << tot << "\n";
}
