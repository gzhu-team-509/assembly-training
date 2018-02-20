#include <bits/stdc++.h>
using namespace std;
using process = pair<string, int>;

queue<process> que;

int main()
{
	int n, q; cin >> n >> q;
	while (n--)
	{
		process p; cin >> p.first >> p.second;
		que.push(p);
	}
	
	int stamp = 0;
	while (!que.empty())
	{
		process cur = que.front(); que.pop();
		
		int diff = min(cur.second, q);
		cur.second -= diff, stamp += diff;
		if (cur.second == 0)
		{
			cout << cur.first << ' ' << stamp << endl;
		}
		else que.push(cur);
	}
}

