#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int tot = 0; string ans;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            ans += ((i + j) % 2 ? '.' : (++tot, 'C'));
        }
        ans += '\n';
    }

    cout << tot << endl;
    cout << ans;
}
