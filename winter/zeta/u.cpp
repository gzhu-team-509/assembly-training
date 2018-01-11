#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct instrument
{
    int idx, exp;

    bool operator < (instrument oth)
    {
        return exp < oth.exp;
    }
} ins[110];

int main()
{
    int n, k; cin >> n >> k;

    for (int i = 0; i < n; i++)
        ins[i].idx = i + 1, cin >> ins[i].exp;

    sort(ins, ins + n);
    int tot = 0; string ans;
    for (int i = 0; i < n; ++i)
    {
        if (k >= ins[i].exp)
        {
            k -= ins[i].exp, ans += to_string(ins[i].idx);
            ++tot, ans += ' ';
        }
    }
    cout << tot << endl;
    if (tot) cout << ans << endl;
}
