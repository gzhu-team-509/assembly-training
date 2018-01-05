#include <iostream>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;

    int ans = 0;
    while (n--)
    {
        int t; cin >> t;
        if (t <= 5 - k) ++ans;
    }
    cout << ans / 3 << endl;
}
