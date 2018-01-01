#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n; cin >> k >> l >> m >> n;
    int d; cin >> d;

    int tot = 0;
    for (int i = 1; i <= d; ++i)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) ++tot;
    }
    cout << tot << endl;
}
