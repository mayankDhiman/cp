#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;   cin >> t;
    while (t --) 
    {
        ll n;   cin >> n;
        if (n%2 == 1){
            cout << "7";
            n -= 3;
        }
        for (int i = 0; i < n/2; i ++)  cout << "1";    cout << endl;
    }
}