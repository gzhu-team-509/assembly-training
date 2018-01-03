#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> con;

    int n; cin >> n;

    int rpt = 2;
    while (rpt--) 
    {
        int i; cin >> i;
        while (i--)
        {
            int t; cin >> t;
            con.push_back(t);
        }
    }

    con.sort();
    con.unique();

    bool ok = true;
    if (con.size() >= n) for (int i = 1; i <= n; ++i, con.pop_front())
    {
        int t = con.front();
        if (i != t) ok = false;
    }
    else ok = false;

    cout << (ok ? "I become the guy." : "Oh, my keyboard!") << endl;
}
