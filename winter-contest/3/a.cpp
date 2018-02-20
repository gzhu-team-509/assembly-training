#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	
	int a, b; cin >> a >> b;
	int mn = a, mx = b - mn;
	for (int i = 3; i <= n; ++i)
	{
		a = b, mn = min(mn, b), cin >> b;
		mx = max(mx, b - mn);
	}
	cout << mx << endl;
}

