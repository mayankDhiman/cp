using namespace std;
#include <bits/stdc++.h>

int main()
{
	int cnt[26];	for (int i = 0; i < 26; i++)	cnt[i] = 0;

	int n, k;	cin >> n >> k;
	string a;	cin >> a;	a += '$';

	int c = 1;
	char curr = a[0];
	for (int i = 1; i < n + 1; i++)
	{
		if (a[i] == curr)
			c += 1;
		else{
			cnt[curr - 'a'] += c/k;
			curr = a[i];
			c = 1;
		}
	}

	cout << *max_element(cnt, cnt + 26) << "\n";
}

// using namespace std;
// #include <bits/stdc++.h>
// #define ll long long

// int main()
// {
// 	ios_base::sync_with_stdio(0);	cin.tie(0);

// 	ll n, k;	cin >> n >> k;
// 	string a;	cin >> a;
// 	vector <pair<char, int>>	r;

// 	ll i = 0, j = 0;
// 	while(i < n)
// 	{
// 		j = i;
// 		while(a[j] == a[i] && j < n)
// 			j += 1;
// 		r.push_back(make_pair(a[i], j - i));
// 		i = j;
// 	}

// 	int cnt[26];	for (int i = 0; i < 26; i++)	cnt[i] = 0;
// 	for (auto i : r)
// 		cnt[i.first - 'a'] += (i.second / k);

// 	cout << *max_element(cnt, cnt + 26) << endl;
// }