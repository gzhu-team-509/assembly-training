#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int na, nb; cin >> na >> nb;
    int k, m; cin >> k >> m;

    vector<int> a, b;
    for (int i = 1; i <= na + nb; ++i)
    {
        int t; cin >> t;
        (i <= na ? a : b).push_back(t);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a[k - 1] < b[b.size() - m])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
