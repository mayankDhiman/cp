#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while(tt --)
    {
        string a;   cin >> a;
        if (count(a.begin(), a.end(), '1')%2){
            cout << "WIN\n";
        }
        else{
            cout << "LOSE\n";
        }
    }
}