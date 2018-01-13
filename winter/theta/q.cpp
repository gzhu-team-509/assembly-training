#include <iostream>
#include <vector>
using namespace std;

bool exist[100100];
int ans[100100];

int main()
{
    int n, m; cin >> n >> m;

    vector<int> num(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> num[i];

    ans[n] = 1, exist[num[n]] = true;
    for (int i = n - 1; i >= 1; --i)
    {
        ans[i] = ans[i + 1] + (exist[num[i]] ? 0 : 1);
        exist[num[i]] = true;
    }

    while (m--)
    {
        int q; cin >> q;
        cout << ans[q] << endl;
    }
}
