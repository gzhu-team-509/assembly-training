#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

const int MAXN = 35;

struct point
{
    int l, r, c;
    point(int x = 0, int y = 0, int z = 0) : l(x), r(y), c(z) {};
};

int l, r, c;
int sl, sr, sc;
int dir[6][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1};

int tme[MAXN][MAXN][MAXN];
char map[MAXN][MAXN][MAXN];

queue<point> que;

int bfs()
{
    while (!que.empty())
    {
        point crt = que.front();
        que.pop();

        for (int i = 0; i < 6; i++)
        {
            point nxt(crt.l + dir[i][0], crt.r + dir[i][1], crt.c + dir[i][2]);
    
            if (map[nxt.l][nxt.r][nxt.c] == 'E')
                return tme[crt.l][crt.r][crt.c] + 1;
            if (map[nxt.l][nxt.r][nxt.c] != '.')
                continue;
            
            tme[nxt.l][nxt.r][nxt.c] = tme[crt.l][crt.r][crt.c] + 1;
            que.push(nxt);
            map[nxt.l][nxt.r][nxt.c] = '#';
        }
    }

    return 0;
}

int main()
{
    while (scanf("%d%d%d", &l, &r, &c) == 3 &&(l || r || c))
    {
        while (!que.empty()) que.pop();        
        memset(tme, 0, sizeof(tme));
        memset(map, 0, sizeof(map));
        
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= r; j++)
            {
                char buf[MAXN];
                scanf("%s", buf + 1);
                for (int k = 1; k <= c; k++)
                {
                    map[i][j][k] = buf[k];
                    if (map[i][j][k] == 'S') {
                        sl = i;
                        sr = j;
                        sc = k;
                    }
                }
            }
        }

        que.push(point(sl, sr, sc));
        map[sl][sr][sc] = '#';
        
        int ans = bfs();
        if (ans) printf("Escaped in %d minute(s).\n", ans);
        else printf("Trapped!\n");
    }
}