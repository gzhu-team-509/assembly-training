#include <iostream>
using namespace std;

int main()
{
    int n, t; cin >> n >> t;
    int mx = t, mn = t;

    int tot = 0;
    while (--n)
    {
        int t; cin >> t;
        if (t > mx) ++tot, mx = t;
        if (t < mn) ++tot, mn = t;
    }
    cout << tot << endl;
}
