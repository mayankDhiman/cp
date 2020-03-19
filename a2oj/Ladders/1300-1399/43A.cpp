#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    map <string, int> cnt;
    while(n--)
    {
        string s;   cin >> s;
        cnt[s] += 1;
    }    
    string ans;
    int mx = INT_MIN;
    for (auto i = cnt.begin(); i != cnt.end(); i++)
    {
        if (i -> second > mx){
            mx = i -> second;
            ans = i -> first;
        }
    }
    cout << ans << endl;
}
