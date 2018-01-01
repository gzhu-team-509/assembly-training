#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;

    int map[120];
    for (int i = 1; i <= n; ++i)
    {
        int t; cin >> t;
        map[t] = i;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (i != 1) cout << " ";
        cout << map[i];
    }
    cout << endl;
}
