// CodeSlayer612
// #495 CODEFORCES B

using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl;
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main()
{
    SPEED 
    string s11, s22;
    cin >> s11; cin >> s22;
    vector<char> s1(s11.begin(), s11.end());
    vector<char> s2(s22.begin(), s22.end());
    vector<char> :: iterator it;
    ll l1 = s1.size(), l2 = s2.size();
    ll l = max(l1,l2);
    if (l1 > l2)
    {
        for (ll i = 0; i < l1 - l2; i ++)
            s2.insert(s2.begin(), ' ');
    }
    if (l1 < l2)
    {
        for (ll i = 0; i < l2 - l1; i ++)
            s1.insert(s1.begin(), ' ');
    }

    
    ll count = 0;
    for (ll i = l - 1; i >= 0; i --)
    {
        if (s1[i] == s2[i])
            count += 2;

        if (s1[i] != s2[i])
            break;

        if (s1[i] == ' ' || s2[i] == ' ')
            break;
    }

    cout << l1 + l2 - count;

    

    return 0;
}