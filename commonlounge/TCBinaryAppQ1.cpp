//	topcoder ques 1 on binary application...
//  implementation for binary search on real numbers



using namespace std;
#include <bits/stdc++.h>
#define ll long long
bool check(double bal, double m, double pay, double r)
{
	double i,tot = bal;
	for (i = 0;i < m; i++)
	{
		tot = tot + (bal*r)/1200;
		bal = bal + (bal*r)/1200 - pay;
	}
	if (tot <= m*pay)
		return true;
	else 
		return false;
}
double solve(double b, double tm, double pay)
{
	double lo = 0,hi = 100;
	int i = 100;
	while (i--)
	{
		double mid = lo + (hi - lo + 1)/2;
		if (check(b,tm,pay,mid))
			lo = mid;
		else
			hi = mid - 1;
	} 
	return lo;
}
int main()
{
	double r,b,tm,i,pay;
	cin >> b >> pay >> tm;
	double ans = solve(b,tm,pay);
	cout << ans;
	
}