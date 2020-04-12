#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> ans(10, 0);
    int n;  cin >> n;
    string a;   cin >> a;
    for (int i = 0; i < a.size(); i ++)
    {
        if (a[i] == 'L'){
            for (int j = 0; j < 10; j ++){
                if (ans[j] == 0){
                    ans[j] = 1;
                    break;
                }
            }
        }
        else if (a[i] == 'R'){
            for (int j = 10; j >= 0; j --){
                if (ans[j] == 0){
                    ans[j] = 1;
                    break;
                }    
            }
        }
        else{
            ans[a[i] - '0'] = 0;
        }
    }
    for (int i = 0; i < 10; i ++){
        cout << ans[i];
    }
    cout << "\n";
}
