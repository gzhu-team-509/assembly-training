#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct number
{
    int val, belong;
    bool operator < (number oth)
    {
        return val < oth.val;
    }
};

int main()
{
    int na, nb; cin >> na >> nb;
    int k, m; cin >> k >> m;

    vector<number> arr;
    for (int i = 1; i <= na + nb; ++i)
    {
        number cur;
        cin >> cur.val;
        cur.belong = (i <= na ? 'A' : 'B');
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; (k || m) && i < arr.size(); ++i)
    {
        if (arr[i].belong == 'B') if (m)
            arr.erase(arr.begin() + i), m--;
        if (arr[arr.size() - 1 - i].belong == 'A') if (k)
            arr.erase(arr.end() - 1 - i), k--;
    }

    bool meetB = false, ok = true;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i].belong == 'B')
            meetB = true;
        if (meetB) if (arr[i].belong == 'A')
            ok = false;
    }

    cout << (ok ? "YES" : "NO") << endl;
}
