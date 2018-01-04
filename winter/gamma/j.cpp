#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

// Editorial: 456C - Boredom / 455A - Boredom
// http://codeforces.com/blog/entry/13336

ll goal[100010];

int main()
{
    int n; cin >> n;

    ll mn = 0;
    for (int i = 0; i < n; ++i)
    {
        ll t; cin >> t;
        ++goal[t];
        if (t > mn) mn = t;
    }

    for (int i = 2; i <= mn; ++i)
    {
        goal[i] = max(goal[i - 1], goal[i - 2] + goal[i] * i);
    }

    cout << goal[mn] << endl;
}
