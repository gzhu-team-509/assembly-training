#include <cstdio>
#include <cstring>
using namespace std;

int father[30030], cnt[30030];

int find(int x)
{
	return father[x] == x ? father[x] : father[x] = find(father[x]);
}

void merge(int a, int b)
{
	int fa = find(a), fb = find(b);
	if (fa != fb)
		father[fa] = fb, cnt[fb] += cnt[fa];
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	int n, m;
	while (scanf("%d%d", &n, &m) == 2 && n)
	{
		memset(father, 0, sizeof(father));
		memset(cnt, 0, sizeof(cnt));
		
		for (int i = 0; i <= n; ++i)
		{
			father[i] = i;
			cnt[i] = 1;
		}
		
		while (m--) {
			int i, h; scanf("%d%d", &i, &h);
			while (--i)
			{
				int q; scanf("%d", &q);
				merge(h, q);
			} 
		}
		
		printf("%d\n", cnt[find(0)]);
	}
}
