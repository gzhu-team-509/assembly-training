#include <iostream>
using namespace std;

int main()
{
    string s, t; cin >> s >> t;

    bool ok = true;
    if (s.length() == t.length())
    {
        for (int i = 0, j = t.length() - 1; i < s.length(); ++i, --j)
        {
            if (s[i] != t[j]) ok = false;
        }
    }
    else ok = false;
    cout << (ok ? "YES" : "NO") << endl;
}
