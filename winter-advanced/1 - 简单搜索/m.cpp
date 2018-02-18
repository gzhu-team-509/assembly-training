#include <bits/stdc++.h>
using namespace std;

// 严格证明
// http://blog.csdn.net/V5ZSQ/article/details/52097459 

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}

int main()
{
	int s, m, n;
	while (cin >> s >> m >> n && s)
	{
		s /= gcd(m, n);
		if (s&1)
			puts("NO");
		else 
			printf("%d\n", s-1);
	}
}

