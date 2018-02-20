#include <bits/stdc++.h>
using namespace std;

stack<int> stk;

int main()
{
	char ch;
	while (cin >> ch)
	{
		if (isdigit(ch)) {
			cin.unget(); 
			int i; cin >> i; stk.push(i);
			continue;
		}
		
		int a = stk.top(); stk.pop();
		int b = stk.top(); stk.pop();
		switch(ch)
		{
			case '+': stk.push(a + b); break;
			case '-': stk.push(b - a); break;
			case '*': stk.push(a * b); break;
		}
	}
	cout << stk.top() << endl;
}

