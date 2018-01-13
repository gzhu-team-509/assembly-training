#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int ans = 0, range = max(n, m);
    for (int a = 0; a <= range; ++a)
        for (int b = 0; b <= range; ++b)
        {
            if (a * a + b == n && b * b + a == m) ++ans;
        }

    cout << ans << endl;
}
