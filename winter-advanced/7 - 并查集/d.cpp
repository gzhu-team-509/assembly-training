#include <bits/stdc++.h>
using namespace std;

int fa[200200], rk[200200];

int find(int x)
{
	if (fa[x] == x) return x;
	int old = fa[x]; fa[x] = find(fa[x]);
	rk[x] = rk[x] + rk[old];
	return fa[x];
}

bool check(int a, int b, int v)
{
	if (find(a) != find(b)) return true;
	else return (rk[a] == v+rk[b]);
}

void merge(int a, int b, int v)
{
	int ra = find(a), rb = find(b);
	if (ra == rb) return;
	fa[ra] = rb; rk[ra] = v+rk[b]-rk[a];
}

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		for (int i = 0; i <= n; ++i) fa[i] = i, rk[i] = 0;
		
		int ans = 0;
		while (m--)
		{
			int a, b, s; scanf("%d%d%d", &a, &b, &s), --a;
			if (!check(a, b, s)) ++ans;
			else merge(a, b, s);
		}
		printf("%d\n", ans);
	}
}
