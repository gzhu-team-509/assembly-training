#include <bits/stdc++.h>
using namespace std;

int ans;
int father[1010];

int find(int x)
{
	return father[x] == x ? father[x] : father[x] = find(father[x]);
}

void merge(int a, int b)
{
	int fa = find(a), fb = find(b);
	if (fa != fb) {
		father[fa] = fb;
		--ans;
	}
}

int main()
{
	int t; scanf("%d", &t);
	while (t--)
	{
		int n, m; scanf("%d%d", &n, &m);
		ans = n;
		
		for (int i = 1; i <= n; ++i) 
			father[i] = i;
		
		while (m--)
		{
			int a, b; scanf("%d%d", &a, &b);
			merge(a, b);
		}
		
		printf("%d\n", ans);
	}
}

