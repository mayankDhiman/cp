#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    vector <int> a(n), pos(n + 1); 
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    pos.push_back(INT_MIN);
    int mx = INT_MIN, cur = 1;
    for (int i = 2; i < n + 2; i ++)
    {
        if (pos[i] > pos[i - 1])
        {
            cur += 1;
        }
        else{
            mx = max(cur, mx);
            cur = 1;
        }
    }
    cout << n - mx << "\n";
}