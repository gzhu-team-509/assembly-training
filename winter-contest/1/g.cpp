#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	string a, b;
	while (cin >> a >> b)
	{
		bool ok = true;
		if (a.size() == b.size())
		{
			for (int i = 0; i < a.size(); ++i)
			{
				if (a[i] != b[a.size() - 1 - i]) ok = false;
			}
		}
		else ok = false;
		
		cout << (ok ? "YES" : "NO") << endl;
	}
}