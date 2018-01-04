#include <iostream>
#include <stack>
using namespace std;

stack<string> ans;
string bgn[] = {"I love it", "I hate it"};
string cmn[] = {"I love that ", "I hate that "};

int main()
{
    int n; cin >> n;

    bool hate = n % 2 ? true : false;
    ans.push(bgn[hate]);

    while (--n)
    {
        hate = !hate;
        ans.push(cmn[hate]);
    }

    while (!ans.empty())
    {
        string s = ans.top();
        ans.pop();
        cout << s;
    }
    cout << endl;
}
