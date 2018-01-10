#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bar;

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        bar.push_back(t);
    }

    sort(bar.begin(), bar.end());

    int mx = 1, cur = 1, tot = 1;
    for (int i = 1; i < n; i++)
    {
        if (bar[i] == bar[i - 1]) ++cur, mx = max(mx, cur);
        else cur = 1, ++tot;
    }
    cout << mx << ' ' << tot << endl;
}
