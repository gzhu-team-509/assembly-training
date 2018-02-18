#include <iostream>
#include <queue>
#include <string> 
using namespace std;

int maze[6][6];
int dir[][2] = {1, 0, -1, 0, 0, 1, 0, -1};

struct status
{
	int x, y;
	string route;
};

void bfs()
{
	queue<status> q;
	q.push({0, 0, "(0, 0)\n"});
	maze[0][0] = 1;
	
	while (!q.empty())
	{
		status cur = q.front(); q.pop();
		if (cur.x == 4 && cur.y == 4)
		{
			cout << cur.route;
			break;
		}
		
		for (int i = 0; i < 4; ++i)
		{
			int x = cur.x + dir[i][0];
			int y = cur.y + dir[i][1];
			if (x >= 0 && x < 5 && y >= 0 && y < 5)
			if (!maze[x][y])
			{
				string str = cur.route + "(" + char('0' + x) + ", " + char('0' + y) + ")\n";
				status nxt = {x, y, str};
				q.push(nxt);
			}
		}
		maze[cur.x][cur.y] = 1;
	}
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> maze[i][j];
		}
	}
	
	bfs();
}

