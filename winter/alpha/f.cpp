#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    if (m < n) swap(m, n);

    if (m % 2) cout << (m - 1) * n / 2 + n / 2 << endl;
    else cout << m * n / 2 << endl;
}
