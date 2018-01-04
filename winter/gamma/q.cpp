#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t; cin >> n >> t;

    int begin = pow(10, n - 1), end = pow(10, n);

    bool ok = false;
    for (int i = begin; !ok && i < end; ++i)
    {
        if (i % t == 0) cout << i, ok = true;
    }
    cout << (ok ? "" : "-1") << endl;
}
