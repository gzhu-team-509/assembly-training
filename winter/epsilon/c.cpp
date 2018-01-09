#include <iostream>
using namespace std;

int soldiers[1005];

int main()
{
    int n, m, k; cin >> n >> m >> k;

    for (int i = 0; i < m; ++i)
    {
        cin >> soldiers[i];
    }
    int fedor; cin >> fedor;

    int ans = 0;
    for (int i = 0; i < m; ++i)
    {
        int cnt = 0; soldiers[i] ^= fedor;
        while (soldiers[i])
        {
            if (soldiers[i] & 1) ++cnt;
            soldiers[i] >>= 1;
        }
        if (cnt <= k) ++ans;
    }
    cout << ans << endl;
}
