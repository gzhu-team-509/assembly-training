#include <cstdio>
using namespace std;

int n, k, tot;
char board[10][10];

bool check(int y)
{
	bool ok = true;
	for (int i = 0; i < n; ++i)
		if (board[i][y] == 'C') 
			ok = false;
	return ok;
}

void search(int x, int placed)
{
	if (placed == k) 
	{	
		tot++;
		return;
	}
	if (x == n) return; 
	
	for (int i = 0; i < n; ++i)
	{
		if (board[x][i] == '#' && check(i))
		{
			board[x][i] = 'C';
			search(x + 1, placed + 1);
			board[x][i] = '#'; 
		}
	}
	search(x + 1, placed); 
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	while (scanf("%d%d", &n, &k) && ~n && ~k)
	{
		tot = 0;
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				scanf(" %c", &board[i][j]); 
			}
		}
		
		search(0, 0);
		printf("%d\n", tot); 
	}
}