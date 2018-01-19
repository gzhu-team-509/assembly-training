#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	int n, k; 
	while (cin >> n >> k)
	{
		vector<int> v;
		while (n--)
		{
			int t; cin >> t;
			v.push_back(t);
		}
		
		int ans = 0;
		for (int i = 0; i < v.size(); ++i)
		{
			if (v[i] > 0 && v[i] >= v[k - 1]) ++ans;
		}
		cout << ans << endl;
	}
}