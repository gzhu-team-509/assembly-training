#include <bits/stdc++.h>
using namespace std;
 
struct ZKWSegmentTree
{
	int levl;
	long long * node, * head;
	int bgn, end;
	
	ZKWSegmentTree(int n)
	{
		levl = n;
		bgn = 1 << (levl - 1), end = 1 << levl;
		node = new long long[end], head = node + bgn;
		
		clear();
	}
	
	void clear()
	{
		memset(node, 0, end * sizeof(long long));	
	} 
	
	void build()
	{
		for (int i = bgn; i < end; ++i)
		{
			int cur = i;
			while (cur >>= 1) node[cur] += node[i];	
		}
	}
	
	long long query(int n)
	{
		return node[bgn + n]; 
	}
	
	long long query(int a, int b)
	{
		a += bgn - 1, b += bgn + 1; 	
		
		long long tot = 0;
		for (int i = a, j = b; i^j^1; i >>= 1, j >>= 1)
		{
			if (~i&1) tot += node[i + 1]; 
			if (j&1) tot += node[j - 1];
		}
		return tot; 
	}
	 
	void update(int n, int v)
	{
		int cur = bgn + n;
		do {
			node[cur] += v; 
		} while (cur >>= 1); 
	}
} tree(17);


int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin); 
	#endif
	
	int kase = 0;
	int t; scanf("%d", &t);
	while (t--)
	{
		printf("Case %d:\n", ++kase);
		tree.clear(); 
		
		int n; scanf("%d", &n);
		for (int i = 1; i <= n; ++i)
		{
			scanf("%lld", &tree.head[i]); 
		}
		tree.build();
		 
		char buf[10];
		while(scanf("%s", buf) == 1)
		{ 
			if (buf[0] == 'Q') 
			{
				int a, b; scanf("%d%d", &a, &b);
				printf("%lld\n", tree.query(a, b)); 
			}
			if (buf[0] == 'A')
			{
				int n, v; scanf("%d%d", &n, &v);
				tree.update(n, v); 
			}
			if (buf[0] == 'S')
			{
				int n, v; scanf("%d%d", &n, &v);
				tree.update(n, -v);
			}
			if (buf[0] == 'E') break; 
		}
	}
}