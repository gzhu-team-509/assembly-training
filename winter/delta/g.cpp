#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;

    int base = 0, bonus = 0, cur = 0;
    while (n--)
    {
        int t; cin >> t;
        if (t)
        {
            ++base;
            cur = max(cur - 1, 0);
            bonus = max(bonus, cur);
        }
        else
        {
            ++cur;
            bonus = max(bonus, cur);
        }
    }

    if (!bonus) bonus = -1;
    cout << base + bonus << endl;
}
