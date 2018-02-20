#include <bits/stdc++.h>
using namespace std;

int n;

struct card
{
	char face;
	int val;
	bool operator == (const card c) const
	{
		return val == c.val;
	}
	bool operator < (const card c) const
	{
		return val < c.val;
	}
} cards[40], cur[40];

void bubble()
{
	memcpy(cur, cards, sizeof(cur));
	for (int i = 0; i < n-1; ++i)
		for (int j = n-1; j >= i+1; --j)
			if (cur[j] < cur[j-1]) swap(cur[j], cur[j-1]);
	for (int i = 0; i < n; ++i)
	{
		if (i) cout << ' ';
		cout << cur[i].face << cur[i].val;
	}
	cout << endl << "Stable" << endl;
}

void selection()
{
	memcpy(cur, cards, sizeof(cur));
	bool stable = true;
	for (int i = 0; i <= n-1; ++i)
	{
		int amin = i;
		for (int j = i+1; j <= n-1; ++j)
			if (cur[j] < cur[amin])
				amin = j;
		for (int j = i + 1; j < amin; ++j) if (cur[j] == cur[i]) stable = false;
		swap(cur[i], cur[amin]);
	}
	for (int i = 0; i < n; ++i)
	{
		if (i) cout << ' ';
		cout << cur[i].face << cur[i].val;
	}
	cout << endl << (stable ? "Stable" : "Not stable") << endl;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> cards[i].face >> cards[i].val;
	}
	
	bubble(); selection();
}

