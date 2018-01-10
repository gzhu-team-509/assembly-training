#include <iostream>
using namespace std;

int sum[(int)1e5 + 10];

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);

    string s; cin >> s;
    for (int i = 1; i <= s.length(); ++i)
    {
        sum[i] = sum[i - 1] + (s[i - 1] == s[i] ? 1 : 0);
    }

    int m; cin >> m;
    while (m--)
    {
        int l, r; cin >> l >> r;
        cout << sum[r - 1] - sum[l - 1] << endl;
    }
}
