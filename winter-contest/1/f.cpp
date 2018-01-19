#include <iostream>
using namespace std;
using LL = long long;

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	long long a, b;
	while (cin >> a >> b)
	{
		cout << a + b << endl;
	}
}