#include <iostream>
#include <algorithm>
using namespace std;

struct dragon
{
    int strength, bonus;
} d[1010];

int main()
{
    int s, n; cin >> s >> n;
    for (int i = 0; i < n; ++i) cin >> d[i].strength >> d[i].bonus;

    auto cmp = [](dragon a, dragon b) {
        return a.strength < b.strength;
    };
    sort(d, d + n, cmp);

    int i;
    for (i = 0; i < n; ++i)
    {
        if (s > d[i].strength) s += d[i].bonus;
        else break;
    }

    cout << (i == n ? "YES" : "NO") << endl;
}
