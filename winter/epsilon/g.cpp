#include <iostream>
using namespace std;

int main()
{
    int n, d; cin >> n >> d;

    int tot = 0;
    for (int i = 0; i < n; ++i)
    {
        int tmp; cin >> tmp;
        tot += tmp;
    }

    if (d < tot + (n - 1) * 10) cout << "-1" << endl;
    else cout << (d - tot) / 5 << endl;
}
