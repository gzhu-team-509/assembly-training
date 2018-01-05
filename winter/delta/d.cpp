#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    string ans;
    bool ok = false;
    while (n--)
    {
        string t; cin >> t;
        if (!ok)
        {
            int pos = t.find("OO");
            if (pos != -1) {
                t.replace(pos, 2, "++");
                ok = true;
            }
        }
        ans += t; ans += '\n';
    }

    cout << (ok ? "YES\n" + ans : "NO\n");
}
