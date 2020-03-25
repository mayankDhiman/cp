#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;   cin >> a;
    string aa;  
    for (ll i = 0; i < a.size(); i ++)
    {
        if (aa.size() > 0 && aa[aa.size() - 1] == a[i]){
            aa.erase(aa.begin() + aa.size() - 1);
        }
        else{
            aa += a[i];
        }
    }
    cout << aa << "\n";
}