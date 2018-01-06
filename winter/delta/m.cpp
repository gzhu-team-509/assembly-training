#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int ans = -1;
    for (int i = 1; i * m <= n; ++i)
    {
        if (2 * i * m >= n)
        {
            ans = i * m; break;
        }
    }
    cout << ans << endl;
}
