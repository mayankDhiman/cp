#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;  cin >> n;   vector <int> a(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
        if (a[i] >= 0)  a[i] = - a[i] - 1;
    }
    if (n%2)
    {
        int ix = min_element(a.begin(), a.end()) - a.begin();
        a[ix] = -a[ix] - 1;
    }

    for (int i = 0; i < n; i ++)
    {
        if (i)
            cout << " " << a[i]; 
        else
            cout << a[i];
    }
    cout << "\n";
}








