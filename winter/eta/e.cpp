#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    if (n == 1)
        cout << m << endl;
    else
    {
        int ans = (m - 1 >= n - (m + 1) + 1 ? m - 1 : m + 1);
        cout << ans << endl;
    }
}
