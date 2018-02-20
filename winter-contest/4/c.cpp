#include <bits/stdc++.h>
using namespace std;

list<int> lst;

int main()
{
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
	
	int n; cin >> n;
	while (n--)
	{
		string cmd; cin >> cmd;
		if (cmd == "insert") {
			int x; cin >> x;
			lst.push_front(x); 
		}
		if (cmd == "delete") {
			int x; cin >> x;
			for (auto it = begin(lst); it != end(lst); ++it) if (*it == x)
			{
				lst.erase(it); break;
			}
		}
		if (cmd == "deleteFirst") {
			lst.pop_front();
		}
		if (cmd == "deleteLast") {
			lst.pop_back();
		}
	}
	for (auto it = begin(lst), bgn = it; it != end(lst); ++it)
	{
		if (it != bgn) cout << ' ';
		cout << *it;
	}
	cout << endl;
}

