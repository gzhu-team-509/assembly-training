#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pieces;

int main()
{
    int n, m; cin >> n >> m;
    while (m--) {
        int t; cin >> t;
        pieces.push_back(t);
    }

    sort(pieces.begin(), pieces.end());
    int mn = 1050;
    for (int i = 0; i + n - 1 < pieces.size(); ++i)
    {
        mn = min(mn, pieces[i + n - 1] - pieces[i]);
    }
    cout << mn << endl;
}
