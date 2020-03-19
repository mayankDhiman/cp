using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	float a[n]; for (int i = 0; i < n; i++)	cin >> a[i];
	int m; cin >> m;
	float b[m]; for (int i = 0; i < m; i++)	cin >> b[i];
	std::vector<int> v;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			float t1;
			t1 = b[j]/a[i];
			if (t1 - floor(t1) == 0)
			{
				v.push_back(t1);
			}
		}
	}
	// for (auto it = v.begin(); it != v.end(); it ++)
	// {
	// 	cout << *it << " ";
	// }
	cout << count(v.begin(), v.end(), *max_element(v.begin(), v.end())) << endl;
	return 0;
}