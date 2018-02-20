#include <iostream>
#include <algorithm>
using namespace std;

int n, cnt, num[110];

void sort()
{
	for (int i = 0; i <= n-1; ++i)
	{
		int amin = i;
		for (int j = i+1; j <= n-1; ++j)
			if (num[j] < num[amin])
				amin = j;
		if (i != amin) ++cnt, swap(num[i], num[amin]);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> num[i];
	
	sort(); 
	for (int i = 0; i < n; ++i) 
	{
		if (i) cout << ' ';
		cout << num[i];	
	}
	cout << endl << cnt << endl;
}

