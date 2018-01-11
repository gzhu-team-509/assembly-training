#include <iostream>
using namespace std;

int holds[110];

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> holds[i];

    int mx = -1, mn = 9999;
    for (int i = 0; i < n; ++i)
    {
        if (i != 0) mx = max(mx, holds[i] - holds[i - 1]);
        if (i != 0 && i != n - 1) mn = min(mn, holds[i + 1] - holds[i - 1]);
    }
    cout << max(mx, mn) << endl;
}
