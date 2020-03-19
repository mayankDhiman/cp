using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll a, b, n, i;	 cin >> a >> b >> n;
	for (i = 0; i < 10; i++)
		if ((a*10 + i) % b == 0)
			break;
	if (i == 10){
		cout << "-1\n"; 
		return 0;
	}	
	cout << a << i;
	n -= 1;
	while(n --)
		cout << 0;
	cout << endl;
}
