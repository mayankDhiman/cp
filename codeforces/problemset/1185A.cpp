#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool okk(string x)
{
    stack <char> xx;
    for (ll i = 0; i < x.size(); i ++){
        if (xx.empty() && i > 0){
            return 0;
        }
        if (xx.empty()){
            xx.push(x[i]);
        }
        else{
            if (xx.top() =='(' && x[i] == ')'){
                xx.pop();
            }
            else{
                xx.push(x[i]);
            }
        }
    }
    if (xx.empty()){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    ll n;   cin >> n;
    vector <ll> a(n);
    ll aa = 0, bb = 0, cc = 0;
    for (ll i = 0; i < n; i ++)
    {
        char x;   cin >> x;
        if (x == '('){
            a[i] = 1;
            aa += 1;
        }
        else if (x == ')'){
            a[i] = -1;
            bb += 1;
        }
        else{
            a[i] = 0;
            cc += 1;
        }   
    }
    ll A = 0, B = 0;
    if (aa > bb){
        B += abs(aa - bb);
    }
    else{
        A += abs(aa - bb);
    }
    ll ccc = cc;
    cc -= (A + B);
    A += cc/2;
    B = ccc - A;
    // cout << A << " " << B << "\n";

    for (ll i = 0; i < n; i ++)
    {
        if (a[i] == 0)
        {   
            if (A > 0)
            {
                a[i] = 1;
                A -= 1;
            }
            else if (!(A > 0) && B > 0){
                a[i] = -1;
                B -= 1;
            }
        }
    }

    // for (ll i = 0; i < n; i ++){
    //     cout << a[i];
    // }
    // cout << "\n";

    string ans;
    for (ll i = 0; i < n; i ++){
        if (a[i] == 1)  ans.push_back('(');
        else    ans.push_back(')');
    }
    // cout << ans << "\n";
    if (okk(ans)){
        cout << ans << "\n";
    }
    else{
        cout << ":(\n";
    }
}