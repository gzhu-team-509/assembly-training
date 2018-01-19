#include <bits/stdc++.h>
using namespace std;

// lala.lala.lala.
// miao.miao.miao? 

int main() 
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin); 
	#endif 
	
	int n; cin >> n;
	string s; getline(cin, s); 
	while (n--)
	{
		getline(cin, s);
		
		if (s.size() >= 5)
		{
			bool r = s.substr(0, 5) == "miao.";
			bool f = s.substr(s.size() - 5, 5) == "lala.";  
		
			if (!r && f) cout << "Freda's" << endl;
			else if (r && !f) cout << "Rainbow's" << endl;
			else cout << "OMG>.< I don't know!" << endl;
		}
		else cout << "OMG>.< I don't know!" << endl;
	}
}