#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k; cin >> k;

    int grow[12];
    for (int i = 0; i < 12; ++i) cin >> grow[i];

    sort(grow, grow + 12);

    int ans = 0;
    for (int i = 11; i >= 0 && k > 0; --i)
    {
        k -= grow[i];
        ++ans;
    }
    cout << (k <= 0 ? ans : -1) << endl;
}
