#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;  cin >> t;
    while(t --){
        int n; string a, result;   cin >> n >> a;
        for (int i = 0; i < n; i ++){            
            if (result.size() == 2){
                break;
            }
            if ( (a[i] - '0') % 2 == 1){
                result += a[i];
            }
        }

        if (result.size() == 2){
            cout << result << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    
    }
}