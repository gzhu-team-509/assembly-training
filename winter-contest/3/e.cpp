#include <bits/stdc++.h>
using namespace std;

int n, num[110];

void dump()
{
	for (int i = 0; i < n; ++i)
	{
		if (i) cout << ' ';
		cout << num[i];
	}
	cout << endl;
}

void sort()
{
	for (int i = 1; i <= n-1; ++i)
	{
		int key = num[i], j = i - 1;
		while (j >= 0 && num[j] > key)
		{
			num[j+1] = num[j], --j;
		}
		num[j+1] = key;
		dump();
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> num[i];
	dump(); sort();
}

