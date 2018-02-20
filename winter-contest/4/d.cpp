#include <bits/stdc++.h>
using namespace std;

string contr;
int mx, mn;
vector<int> levl;
vector<double> water, rslt;
map<int, vector<int>> dots;

int main()
{
	cin >> contr; contr += '_'; 
	levl.resize(contr.size()); water.resize(contr.size());
	
	int cur = 0;
	for (unsigned i = 0; i < contr.size(); ++i)
	{
		levl[i] = cur; dots[cur].push_back(i);
		switch (contr[i]) {
			case '\\': --cur; mn = min(mn, cur); break;
			case '/' : ++cur; mx = max(mx, cur); break;
		}
	}
	
	for (int i = mn; i <= mx; ++i)
	{
		for (int j = 0; (size_t)j<dots[i].size() && (size_t)j+1<dots[i].size(); ++j)
		{
			int a = dots[i][j], b = dots[i][j+1];
			if (contr[a] == '\\' && contr[b-1] == '/')
				++water[a], --water[b-1];
		}
	}
	
	double sum = 0, tot = 0; int cell = 0;
	for (unsigned i = 0; i < water.size(); ++i)
	{
		if (water[i]) {
			int mark = water[i];
			switch ((int)water[i]) {
				case -1: cell += mark; water[i] = 0.5 + cell; break;
				case +1: water[i] = 0.5 + cell; cell += mark; break;
			}
		}
		else water[i] = cell;
				
		sum += water[i];
		if (!cell && sum != 0) rslt.push_back(sum), tot += sum, sum = 0;
	}
	
	printf("%d\n%zd", (int)tot, rslt.size());
	for (unsigned i = 0; i < rslt.size(); ++i)
		printf(" %d", (int)rslt[i]);
	putchar('\n');
}

