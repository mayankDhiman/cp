#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s[3];  cin >> s[0] >> s[1] >> s[2];
    sort (s, s + 3);
    if (s[0] == s[1] && s[1] == s[2]){
        cout << "0\n";
        return 0;
    }
    // cout << s[0][0] << " " << s[1][0] << "\n";

    if (s[0][1] == s[1][1] && s[1][1] == s[2][1]){
        // cout << "nn\n";
        // if (s[2][0] == s[0][0] + 2 or s[0][0] == s[2][0] + 2 or s[1][0] == s[0][0] + 2 or s[0][0] == s[1][0] + 2 or s[1][0] == s[2][0] + 2 or s[2][0] == s[1][0] + 2){
        //     // cout << "xx\n";
        //     cout << "0\n";
        //     return 0;
            char a = s[0][0], b = s[1][0], c = s[2][0];
            // cout << a << b << c;
            char aaa[3] = {a, b, c};
            sort(aaa, aaa + 3);
            if (aaa[1] == aaa[0] + 1 && aaa[2] == aaa[1] + 1){
                cout << "0\n";
                return 0;
            }
    }

    if (s[0] == s[1] or s[1] == s[2] or s[0] == s[2]){
        cout << "1\n";
        return 0;
    }

    if (s[0][1] == s[1][1]){
        if (s[1][0] == s[0][0] + 1 or s[0][0] == s[1][0] + 1 or s[1][0] == s[0][0] + 2 or s[0][0] == s[1][0] + 2){
            cout << "1\n";
            return 0;
        }
    }

    if (s[1][1] == s[2][1]){
        if (s[2][0] == s[1][0] + 1 or s[1][0] == s[2][0] + 1 or s[2][0] == s[1][0] + 2 or s[1][0] == s[2][0] + 2){
            cout << "1\n";
            return 0;
        }
    }

    if (s[0][1] == s[2][1]){
        if (s[0][0] == s[2][0] + 1 or s[2][0] == s[0][0] + 1 or s[0][0] == s[2][0] + 2 or s[2][0] == s[0][0] + 2){
            cout << "1\n";
            return 0;
        }
    }

    cout << "2\n";
    return 0;

}