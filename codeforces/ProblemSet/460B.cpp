#include <bits/stdc++.h>
using namespace std;

const int N = 1000000000;

int sm(int x)
{
    int sm = 0;
    while(x > 0){
        sm += (x%10);
        x /= 10;
    }
    return sm;
}

int main()
{
    int a, b, c;    cin >> a >> b >> c;
    vector <int> ans;
    for (int sx = 1; sx < 82; sx ++)
    {
        int x = b*pow(sx, a) + c;
        if (sm(x) == sx && x > 0 && x < N)
            ans.push_back(x);
    } 
    cout <<  ans.size() << "\n";
    for (int i = 0; i < ans.size(); i ++)
    {
        if (!i)
            cout << ans[i];
        else
            cout << " " << ans[i];
    }
    if (ans.size())
        cout << "\n";
    return 0;
}