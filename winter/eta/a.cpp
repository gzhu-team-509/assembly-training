#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;

    int tot = 0; string ans;
    for (int i = 1; i <= n; ++i)
    {
        bool ok = true;
        for (int j = 1; j <= n; ++j)
        {
            int t; cin >> t;
            if (t == 1 || t == 3) ok = false;
        }
        if (ok)
            ++tot, ans += to_string(i), ans += ' ';
    }

    cout << tot << endl;
    if (tot) cout << ans << endl;
}
