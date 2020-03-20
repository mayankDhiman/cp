#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);   cout.tie(0);

	vector <vector<int>> q = {{1, 2}, {2, 3}, {4, 5}, {5, 6}};
	vector <int> r(4);
	for (int i = 0; i < 4; i ++)
	{
		cout << "? " << q[i][0] << " " << q[i][1] << endl;
		cin >> r[i];
		if (r[i] == 0){
			return 1;
		}
	}


	vector<int> ans = {4, 8, 15, 16, 23, 42};
	do{
		if (ans[0] * ans[1] == r[0] && ans[1] * ans[2] == r[1] 
			&& ans[3] * ans[4] == r[2] && ans[4] * ans[5] == r[3])
				break;
	}while(next_permutation(ans.begin(), ans.end()));

	cout << "!";
	for (int i : ans)
		cout << " " << i;
	cout << endl;
	return 0;
}
