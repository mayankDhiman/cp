#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;   cin >> a;
    int n = (int)a.size(), cnt = 0;
    for (int i = 0; i < n; i ++)    if (a[i] == '1')    cnt += 1;
    int i = 0;
    for (; i < n; i ++)
    {
        if (a[i] == '2')
            break;
        if (a[i] != '1')
            cout << a[i];
    }
    for (int i = 0; i < cnt; i ++){
        cout << '1';
    }
    for (; i < n; i ++)
        if (a[i] != '1')
            cout << a[i];
    cout << "\n";
}
