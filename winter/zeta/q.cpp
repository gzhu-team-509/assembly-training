#include <iostream>
using namespace std;

int d[600];

int main()
{
    int n, k; cin >> n >> k;

    for (int i = 0; i < n; ++i)
        cin >> d[i];

    int tot = 0;
    for (int i = 1; i < n; ++i)
    {
        tot += max(k - d[i - 1] - d[i], 0);
        d[i] += max(k - d[i - 1] - d[i], 0);
    }

    cout << tot << endl;
    for (int i = 0; i < n; ++i)
        cout << d[i] << ' ';
    cout << endl;
}
