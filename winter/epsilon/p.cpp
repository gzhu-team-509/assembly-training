#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int mx = 1;

    int hh = -1, mm = -1;
    int cur = 1;
    while (n--)
    {
        int chh, cmm; cin >> chh >> cmm;
        if (hh == chh && mm == cmm)
            cur++, mx = max(cur, mx);
        else
            cur = 1, hh = chh, mm = cmm;
    }

    cout << mx << endl;
}
