#include <iostream>
using namespace std;

bool lighted[110];

int main()
{
    int n, m; cin >> n >> m;

    while (n--)
    {
        int x; cin >> x;
        while (x--)
        {
            int t; cin >> t;
            lighted[t - 1] = true;
        }
    }

    bool ok = true;
    for (int i = 0; i < m; ++i)
    {
        if (!lighted[i]) ok = false;
    }
    cout << (ok ? "YES" : "NO") << endl;
}
