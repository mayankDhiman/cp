#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    vector <int> a(n);  for (int i = 0; i < n; i ++)    cin >> a[i];
    int i = 0, j = 0;

    int mx = 1;
    for ( ;i < n; )
    {
        j = i + 1;
        while(a[j] > a[j - 1] && j < n)
            j ++;
        mx = max(j - i, mx);
        i = j;
    }
    cout << mx << "\n";
}