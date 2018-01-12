#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int ans = 0;
    while (n && m && n + m >= 3)
    {
        if (n > m)
            n -= 2, m -= 1;
        else
            n -= 1, m -= 2;
        ++ans;
    }

    cout << ans << endl;
}
