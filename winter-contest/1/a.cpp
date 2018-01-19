#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int row, col, cnt;
bool location[30][30];

void search(int a, int b)
{
	for (int i = b; i <= col; ++i)
	{
		if (location[a][i]) {
			location[a][i] = false, --cnt;
			b = i;
		}
	}
	if (a + 1 <= row) search(a + 1, b);
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	int a, b;
	while (scanf("%d%d", &a, &b) == 2 && ~a && ~b)
	{
		memset(location, 0, sizeof(location));
		
		row = a, col = b, cnt = 1;
		location[a][b] = true;
		while (scanf("%d%d", &a, &b) && a && b)
		{
			location[a][b] = true, ++cnt;
			row = max(row, a);
			col = max(col, b);
		}
		
		int tot = 0;
		for (int i = 0; i <= row && cnt; ++i)
		{
			search(i, 0), ++tot;
		}
		printf("%d\n", tot);
	}
}