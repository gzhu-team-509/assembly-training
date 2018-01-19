#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	long long n, m, a;
	while (cin >> n >> m >> a)
	{
		long long s1 = (n / a) + (n % a ? 1 : 0);
		long long s2 = (m / a) + (m % a ? 1 : 0);
		cout << s1 * s2 << endl;
	}
}