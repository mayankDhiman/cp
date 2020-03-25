#include<bits/stdc++.h>
using namespace std;

bool pred(const string a, const string b)
{
    int m = (int)a.size(), n = (int)b.size(), j = 0; 
    for (int i = 0; i < n && j < m; i ++){
        if (b[i] == a[j]){
            j += 1;
        }
    }
    return (j == m);
}

int main()
{
    string p, t;    cin >> p >> t;
    int n = (int)p.size(), m = (int)t.size();
    vector<int> a(n);
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        a[i] -= 1;
    }
    int lo = 0, hi = n - 1;
    string p1 = p;
    p1.erase(p1.begin() + a[0]);
    if (!pred(t, p1)){
        cout << "0\n";
        return 0;
    }; 
    while(lo < hi)
    {
        int md = lo + (hi - lo + 1)/2;
        string pp = p;
        for (int i = 0; i <= md; i ++)
            pp[a[i]] = '.';
        string ppp;
        for (int i = 0; i < n; i ++)
            if (pp[i] != '.')
                ppp.push_back(pp[i]);
        if (pred(t, ppp))
            lo = md;
        else
            hi = md - 1;
    }
    cout << lo + 1 << "\n";
    // cout << pred(p, t) << "\n";
}