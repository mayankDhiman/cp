// 1 2 3   4 5 6   7 8 9   10 11 12
// 0 0 1   1 1 2   
// 1       2       3        4       

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;  cin >> t;

    while(t -- )
    {
        ll x, y, k; cin >> x >> y >> k;
        x += y;
        k = ceil(double(x + 1)/double(k));
        if (k % 2 == 0){
            cout << "Paja\n";
        }
        else{
            cout << "Chef\n";
        }
    }
}