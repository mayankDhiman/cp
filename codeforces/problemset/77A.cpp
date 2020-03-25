#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;   cin >> n >> k;
    int d = (n / k);
    while(d --)
    {
        for (int i = 0; i < k; i ++)
            cout << char('a' + i);
    }
    int dd = n % k;
    for (int i = 0; i < dd; i ++)
        cout << char('a' + i);
    cout << "\n";
}