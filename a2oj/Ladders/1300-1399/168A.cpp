// (1 + c) >= .14 * 10
// c >= 

using namespace std;
#include <bits/stdc++.h>
int main()
{
	double n, x, y;	cin >> n >> x >> y;
	y /= 100;
	y *= n;
	y -= x;
	if (y < 0){
		cout << "0\n";
		return 0;
	}
	cout << ceil(y) << endl;
}