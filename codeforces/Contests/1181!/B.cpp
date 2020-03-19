#include <bits/stdc++.h>
using namespace std;
#define ll long long

string sm(string a, string b)
{
    if (a.length() > b.length()) 
            swap(a, b); 
        string str = "";   
        int n1 = a.length(), n2 = b.length(); 
        int diff = n2 - n1; 
        int carry = 0; 
        for (int i=n1-1; i>=0; i--) 
        { 
            int sum = ((a[i]-'0') + 
                    (b[i+diff]-'0') + 
                    carry); 
            str.push_back(sum%10 + '0'); 
            carry = sum/10; 
        } 
    
        for (int i=n2-n1-1; i>=0; i--) 
        { 
            int sum = ((b[i]-'0')+carry); 
            str.push_back(sum%10 + '0'); 
            carry = sum/10; 
        } 
    
        if (carry) 
            str.push_back(carry+'0'); 
    
        reverse(str.begin(), str.end()); 
    
        return str; 
}

int main()
{
    ll n;   cin >> n;
    string a;   cin >> a;
    ll split1 = (n + 1)/2, split2 = (n + 1)/2;
    while(a[split1] == '0' && split1 < n)
        split1 += 1;
    while(a[split2] == '0' && split2 >= 0)
        split2 -= 1;
    string b1, b2, b11, b22;
    b1 = a.substr(split1, n - split1);
    b2 = a.substr(0, split1);
 
    b11 = a.substr(split2, n - split2);
    b22 = a.substr(0, split2);

    if (split1 == split2 && n % 2 == 1 && n > 1)
    {
        b1 = a.substr(split1, n - split1);
        b2 = a.substr(0, split1);
        split1 -= 1;
        if (a[split1] != '0')
        {
            string b111 = a.substr(split1, n - split1);
            string b222 = a.substr(0, split1);
            cout << min(sm(b1,b2), sm(b111,b222)) << "\n";
            return 0;
        }
    }

    // cout << sm(b1, b2) << " " << sm(b11, b22);
    string r1 = sm(b1, b2), r2 = sm(b11, b22);
    if (r1.size() < r2.size())
    {
        cout << r1 << "\n";
    }
    else if (r1.size() > r2.size()){
        cout << r2 << "\n";

    }
    else{
        cout << min(sm(b1,b2), sm(b11,b22));
        cout << "\n";
    }
}