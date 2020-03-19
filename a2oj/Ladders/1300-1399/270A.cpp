// x * n = (n - 2) * 180
// x * n = 180*n - 360
// 360 = 180*n - x*n
// 360 = (180 - x)*n
// 360/(180 - x)

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	while(n --){
		double a;	cin >> a;
		double t = (360/(180 - a));
		if (t - floor(t) == 0 && t > 2){
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
	return 0;
}