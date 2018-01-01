// WA
#include <iostream>
using namespace std;

int main()
{
    int k; cin >> k;
    int m = 1, n = 101, mp, np;
    for (int i = 1; i <= k; i++)
    {
        int t; cin >> t;
        if (t > m) {mp = i, m = t;}
        if (t <= n) {np = i, n = t;}
    }
    int ans = mp - 1 + k - np;
    if (mp > np) --ans;
    cout << ans << endl;
}
