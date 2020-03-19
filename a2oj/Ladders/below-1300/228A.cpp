using namespace std;

#include <bits/stdc++.h>
int main()
{
	int arr[4];
	for (int i = 0; i < 4; i ++)	cin >> arr[i];

	map <int, int> count;
	for (int i = 0; i < 4; i ++)	count[arr[i]]++;
	
	int res = 0;
	for (auto i: count){
		res += (i.second - 1); 
	}

	cout << res << endl;		

}