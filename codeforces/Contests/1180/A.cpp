#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    int nn = 1, res = 0;
    while(n --)
    {
        res += nn;
        nn += 2;
    }
    res = res * 2 - (nn - 2);
    cout << res << "\n";
}